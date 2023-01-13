/* mbed Microcontroller Library
 * Copyright (c) 2019 ARM Limited
 * SPDX-License-Identifier: Apache-2.0
 */

#include "mbed.h"
#include "platform/mbed_thread.h"

// Blinking rate in milliseconds
#define BLINKING_RATE_MS                                                    500


int main()
{
    // Initialise the digital pin LED1 as an output
    DigitalOut led(LED1);
    #if __cplusplus == 201103L
        static_assert(false, "C++14 under");
    #elif __cplusplus > 201103L
        static_assert(false, "C++17 more");
    #endif
    while (true) {
        if(int i = 0;i < 4){
        led = !led;
        }
        thread_sleep_for(BLINKING_RATE_MS);
    }
}
