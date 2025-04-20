#include <stdint.h>
#include "gpio.h"
#include "sio.h"

int main(void) {
    GPIO->GPIO25_CONTROL.bit.FUNCSEL = 0x5;

    SIO->OE.bit.GPIO_25  = 1u;
    SIO->OUT.bit.GPIO_25 = 1u;

    return 0;
}

/* setup system clocks */
void system_init(void) {
}
