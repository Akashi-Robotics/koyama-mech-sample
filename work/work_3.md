```c++
#include "mbed.h"
#include "arrc_mbed/rotary_inc.hpp"

// main() runs in its own thread in the OS

constexpr int resolution = 256;
constexpr double dt = 0.01;
constexpr double link_input = 0.4;
constexpr double load_input = 0.4;
constexpr double roll_input = 0.2;

 
int main() {
  DigitalIn slit_sensor(PA_11);
  PwmOut link(PA_1);
  PwmOut load(PB_0);
  PwmOut roll(PA_7);
  slit_sensor.mode(PullUp);
  RotaryInc encoder(PA_4,PA_0,1);

  link = 0;
  load = 0;
  roll = 0;
  int slit = slit_sensor.read();
  int rotate = 0;
  wait(2);
  //1
  while (true) {
    while(slit == 0) {
      slit = slit_sensor.read();
      link = link_input;
    }
    while(slit == 1) {
      slit = slit_sensor.read();
      link = link_input;
    }
    //2
    //3
    //4_while
    while(/*4-1*/ < 3){
      //4-2
    }
    //5
  }
}
```
