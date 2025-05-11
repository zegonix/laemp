/*
 * linker script for the `rp2350`
 *
 * this script tells the linker how to assemble the executable
 */

ENTRY(Reset_Handler)

MEMORY
{
    flash(rx): ORIGIN = 0x10000000, LENGTH =   4M
    ram(rx)  : ORIGIN = 0x20000000, LENGTH = 520K
}

/*
 * the stack is placed at the end of the ram
 * therefore the addresses for the stack are
 * calculated here
 */
_estack = ORIGIN(ram) + LENGTH(ram);

_heap_size  = 0x1000; /* 4kB of heap */
_stack_size = 0x1000; /* 4kB of stack */

SECTIONS
{
    .text :
    {
        . = ALIGN(4);
        KEEP(*(.vectors*))
        *(.text*)
        _etext = .;
    } > flash

    .bss (NOLOAD):
    {
        _sbss = .;
        *(.bss*)
        *(COMMON)
        _ebss = .;
    } > ram

    .rodata :
    {
        . = ALIGN(4);
        *(.rodata*)
        . = ALIGN(4);
    } > flash

    _sidata = LOADADDR(.data);
    .data :
    {
        _sdata = .;
        *(.data*);
        _edata = .;
    } > ram AT > flash

    .heap :
    {
        . = ALIGN(8);
        PROVIDE ( end = . );
        PROVIDE ( _end = . );
        _sheap = .;
        . = . + _heap_size;
        . = ALIGN(8);
        _eheap = .;
    } > ram

    .stack :
    {
        . = ALIGN(8);
        _sstack = .;
        . = . + _stack_size;
        . = ALIGN(8);
        _estack = .;
    } > ram
}
