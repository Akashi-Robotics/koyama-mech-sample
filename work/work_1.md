```c++
#include "mbed.h"
#include "arrc_mbed/rotary_inc.hpp"


constexpr int resolution = 256; //分解能の256をresolutionという変数に代入
 
int main() {   
    //1
    slit_sensor.mode(PullUp); //センサのプルアップ設定
    //2
    //3
    //4
    //5

    //6-1
    //6-2
    //6-3

    //7-1
    //7-2
    //7-3

    int slit = slit_sensor.read();
    int rotate = 0;
    wait(2);
    while (true) {
        //loop処理
    }
}
```