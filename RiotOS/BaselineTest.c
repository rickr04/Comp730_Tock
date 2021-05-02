/**
 * 
 * 
 *      Benchmarking gpio calls
 *
 *      Rick Ramirez <rickr>
 *
 * 
 */

#include <stdio.h>
#include "periph/gpio.h"
#include "time.h"
#include "xtimer.h"

int main(void)
{
    puts("Generated RIOT application: 'GPIO_Test'");

    // RiotOS makes you define pins by their <port> <pin number>
    // See: https://content.arduino.cc/assets/Pinout-NANOble_latest.png for board pinout

    // Define pins we are going to use
    int pin_D2 = GPIO_PIN(1, 11);
    int pin_D3 = GPIO_PIN(1, 12);

    // Init the pins as output
    gpio_init(pin_D2, GPIO_OUT);
    gpio_init(pin_D3, GPIO_OUT);

    while (1)
    {
        //Start Timing
        gpio_set(pin_D2);

        //gpio_clear(pin_D3); // uncomment to get timing for setting a gpio pin low
        //gpio_set(pin_D3);  // uncomment to get timing for setting a gpio pin high
        //xtimer_msleep(100); // uncomment to get timing for a 100ms sleep
        //End Timing
        gpio_clear(pin_D2);
    }
    return 0;
}