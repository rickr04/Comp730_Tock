/*   4 bit counter test
 *
 *
 *
 *
 * 
 * */

#include <led.h>
#include <timer.h>
#include <console.h>
#include <gpio.h>
#include <tock.h>

int main(void)
{
    // Delay used for debugging purposes
    delay_ms(9000);
    int gpio = gpio_count();
    printf("Num of GPIO is:%d\n", gpio);
    // Set our pins as outputs
    gpio_enable_output(2); // pin D2
    gpio_enable_output(3); // Pin D3
    gpio_enable_output(4); // Pin D4
    gpio_enable_output(5); // Pin D5
    gpio_enable_output(6); // Pin D6

    // 4 bit Binary Counter
    while (true)
    {
        //Start Timing
        gpio_set(6);

        //1
        gpio_clear(2);
        gpio_clear(3);
        gpio_clear(4);
        gpio_clear(5);
        gpio_set(2);
        delay_ms(100);

        //2
        gpio_clear(2);
        gpio_set(3);
        delay_ms(100);

        //3
        gpio_clear(3);
        gpio_set(2);
        gpio_set(3);
        delay_ms(100);

        //4
        gpio_clear(2);
        gpio_clear(3);
        gpio_set(4);
        delay_ms(100);

        //5
        gpio_clear(4);
        gpio_set(2);
        gpio_set(4);
        delay_ms(100);

        //6
        gpio_clear(2);
        gpio_clear(4);
        gpio_set(3);
        gpio_set(4);
        delay_ms(100);

        //7
        gpio_clear(3);
        gpio_clear(4);
        gpio_set(2);
        gpio_set(3);
        gpio_set(4);
        delay_ms(100);

        //8
        gpio_clear(2);
        gpio_clear(3);
        gpio_clear(4);
        gpio_set(5);
        delay_ms(100);

        // Stop Timing
        gpio_clear(6);
    }
}
