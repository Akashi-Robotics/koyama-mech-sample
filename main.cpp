#include "mbed.h"
#include "arrc_mbed/rotary_inc.hpp"

constexpr int resolution = 256;
constexpr double dt = 0.01;
constexpr double link_input = 0.4;
constexpr double load_input = 0.4;
constexpr double roll_input = 0.2;

/*
slit_sensor.read() => スリットセンサが遮られているとき1を、遮られていない時0を返す関数
encoder.get() => ロータリーエンコーダーの回転数を返す関数
link = link_input => リンク機構を回す (= 0で止める)
load = load_input => 紙飛行機を押し出すローラーを回す (= 0で止める)
roll = roll_input => ローラーを回す (= 0で止める)
*/
 
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
  while (true) {
    roll = roll_input; //ローラーを回す
    while(slit == 0 or slit_sensor.read() == 1){
      link = link_input;
      slit = slit_sensor.read();
    }
    link = 0; //リンク機構を止める
    rotate = encoder.get()/resolution; //エンコーダーから現在の回転数を求める
    while(encoder.get()/resolution - rotate < 3){
      load = load_input; //紙飛行機を押し出すローラーを回す
    }
    load = 0; //紙飛行機を押し出すローラーを止める
  }
}