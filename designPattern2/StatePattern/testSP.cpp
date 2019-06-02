//
//  testSP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testSP.hpp"

void testSP()
{
    TrafficLights tl;
    
    enum TLState {Red, Green, Yellow};
    
    TLState state = Red;  // 初始状态为红灯
    int i = 0;  // 总次数
    int seconds;  // 秒数
    
    while (true) {
        // 表示一个完整的状态流（红灯->绿灯->黄灯）已经完成
        if (i % 3 == 0)
            std::cout << "**********" << "Session " << ((i+1)/3)+1 << "**********" << std::endl;
        
        // 根据当前状态来设置持续时间，红灯（6秒）、绿灯（4秒）、黄灯（2秒）
        if (state == Red) {
            seconds = 6;
            state = Green;
        } else if (state == Green) {
            seconds = 4;
            state = Yellow;
        } else if (state == Yellow) {
            seconds = 2;
            state = Red;
        }
        
        // 休眠
        sleep(seconds);
        
        tl.Request();
        i++;
    }

}



