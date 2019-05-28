//
//  testBF.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testBF.hpp"

void testBP()
{
    IElectricalEquipment *light = new Light();
    IElectricalEquipment *fan = new Fan();
    
    ISwitch *pullChain = new PullChainSwitch(light);
    ISwitch *twoPosition = new TwoPositionSwitch(fan);
    
    //开灯、关灯
    pullChain->On();
    pullChain->Off();
    
    //打开风扇、关闭风扇
    twoPosition->On();
    twoPosition->Off();
    
    SAFE_DELETE(twoPosition);
    SAFE_DELETE(pullChain);
    SAFE_DELETE(fan);
    SAFE_DELETE(light);
    
    getchar();
    return;
    
}
