/*
 * Copyright (C) 2021 unc
 *
 * This file is subject to the terms and conditions of the GNU Lesser
 * General Public License v2.1. See the file LICENSE in the top level
 * directory for more details.
 */

/**
 * @ingroup     examples
 * @{
 *
 * @file
 * @brief       Benchmarking gpio calls
 *
 * @author      Rick Ramirez <rickr>
 *
 * @}
 */

#include <stdio.h>
#include "periph/gpio.h"
#include "time.h"
#include "xtimer.h"
int main(void)
{
    
    puts("Generated RIOT application: 'GPIO_Test'");
    int pin_D2 = GPIO_PIN(1,11);
    int pin_D3 = GPIO_PIN(1,12);
    int pin_D4 = GPIO_PIN(1,15);
    int pin_D5 = GPIO_PIN(1,13);
    int pin_D6 = GPIO_PIN(1,14);
    gpio_init(pin_D2, GPIO_OUT);
    gpio_init(pin_D3, GPIO_OUT);
    gpio_init(pin_D4, GPIO_OUT);
    gpio_init(pin_D5, GPIO_OUT);
    gpio_init(pin_D6, GPIO_OUT);

/*    
    while(1){
    	gpio_set(pin_D6);
	xtimer_msleep(100);
	gpio_clear(pin_D6);
	xtimer_msleep(100);
    }
    */

    while(1){
	gpio_set(pin_D6);
	// 
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

	gpio_clear(pin_D6);
	
    }
    
    return 0;
}
