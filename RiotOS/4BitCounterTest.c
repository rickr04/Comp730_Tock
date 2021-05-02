/**
 * 
 * 
 *
 * 
 *  Benchmarking gpio calls
 *
 *  Rick Ramirez <rickr>
 *
 * 
 */

#include <stdio.h>
#include "periph/gpio.h"
#include "time.h"
#include "xtimer.h"
int main(void)
{
	puts("Generated RIOT application: '4BitCounter_Test'");
	// RiotOS makes you define pins by their <port> <pin number>
	// See: https://content.arduino.cc/assets/Pinout-NANOble_latest.png for board pinout

	// Define pins we are going to use
	int pin_D2 = GPIO_PIN(1, 11);
	int pin_D3 = GPIO_PIN(1, 12);
	int pin_D4 = GPIO_PIN(1, 15);
	int pin_D5 = GPIO_PIN(1, 13);
	int pin_D6 = GPIO_PIN(1, 14);

	// Set pins as output
	gpio_init(pin_D2, GPIO_OUT);
	gpio_init(pin_D3, GPIO_OUT);
	gpio_init(pin_D4, GPIO_OUT);
	gpio_init(pin_D5, GPIO_OUT);
	gpio_init(pin_D6, GPIO_OUT);

	while (1)
	{
		//Start Timing
		gpio_set(pin_D6);

		// 1
		gpio_clear(pin_D2);
		gpio_clear(pin_D3);
		gpio_clear(pin_D4);
		gpio_clear(pin_D5);
		gpio_set(pin_D2);
		xtimer_msleep(100);

		//2
		gpio_clear(pin_D2);
		gpio_set(pin_D3);
		xtimer_msleep(100);

		//3
		gpio_clear(pin_D3);
		gpio_set(pin_D2);
		gpio_set(pin_D3);
		xtimer_msleep(100);

		//4
		gpio_clear(pin_D2);
		gpio_clear(pin_D3);
		gpio_set(pin_D4);
		xtimer_msleep(100);

		//5
		gpio_clear(pin_D4);
		gpio_set(pin_D2);
		gpio_set(pin_D4);
		xtimer_msleep(100);

		//6
		gpio_clear(pin_D2);
		gpio_clear(pin_D4);
		gpio_set(pin_D3);
		gpio_set(pin_D4);
		xtimer_msleep(100);

		//7
		gpio_clear(pin_D3);
		gpio_clear(pin_D4);
		gpio_set(pin_D2);
		gpio_set(pin_D3);
		gpio_set(pin_D4);
		xtimer_msleep(100);

		//8
		gpio_clear(pin_D2);
		gpio_clear(pin_D3);
		gpio_clear(pin_D4);
		gpio_set(pin_D5);
		xtimer_msleep(100);

		// End Timing
		gpio_clear(pin_D6);
	}

	return 0;
}