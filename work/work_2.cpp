#include "mbed.h"
#include "arrc_mbed/rotary_inc.hpp"

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
  //1
  //2
  wait(2); // ループ開始前の少しだけ待つ
  while (true) {
    //3_while
    while(/*3-1*/) {
      //3-2
      //3-3
    }
    //4_while
    while(/*4-1*/) {
      //4-2
      //4-3
    }
    //5
  }
}