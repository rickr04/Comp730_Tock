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

    //  Set our pins as outputs
    gpio_enable_output(2); // pin D2
    gpio_enable_output(3); // Pin D3

    /*
   * gpio_set()  <- Set a gpio pin to high
   * gpio_clear() <- Set a gpio pin to low
   * gpio_toggle() <- Change gpio pin from high to low or low to high
   *  (not used in testing but still cool)
   * 
   */
    while (true)
    {
        gpio_set(2);   //gpio on
        // gpio_set(3) // uncomment to get timing for setting a gpio pin to high
        // gpio_clear(3) // uncomment to get timing for setting a gpio pin to low
        // delay_ms(100) // uncomment to get timing for a 100ms sleep
        gpio_clear(2); // gpio off
    }
}