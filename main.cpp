/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"
#include <concepts>

// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                                    500

template<typename T>
void f(T x){}

int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);

    while (true) {
        f(1);
        led = !led;
        thread_sleep_for(BLINKING_RATE_MS);
    }
}
