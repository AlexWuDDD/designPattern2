//
//  concrete_implementor.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_implementor_h
#define concrete_implementor_h

#include "implementor.h"
#include <iostream>

//电灯
class Light : public IElectricalEquipment
{
public:
    //开灯
    virtual void PowerOn() override
    {
        std::cout << "Light is on." << std::endl;
    }
    
    //关灯
    virtual void PowerOff() override
    {
        std::cout << "Light is off." << std::endl;
    }
};

class Fan : public IElectricalEquipment
{
public:
    //打开风扇
    virtual void PowerOn() override
    {
        std::cout << "Fan is on." << std::endl;
    }
    
    //关闭风扇
    virtual void PowerOff() override
    {
        std::cout << "Fan is off." << std::endl;
    }
};


#endif /* concrete_implementor_h */
