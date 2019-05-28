//
//  refined_abstraction.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef refined_abstraction_h
#define refined_abstraction_h


#include "abstraction.h"
#include <iostream>

//拉链式开关
class PullChainSwitch : public ISwitch
{
public:
    PullChainSwitch(IElectricalEquipment *ee) : ISwitch(ee){}
    
    //用拉链式开关打开电器
    virtual void On() override
    {
        std::cout << "Switch on the equipment with a pull chain switch." << std::endl;
        m_pEe->PowerOn();
    }
    
    //用拉链式开关关闭电器
    virtual void Off() override
    {
        std::cout << "Swicth off the equipment with a pull chain switch." << std::endl;
        m_pEe->PowerOff();
    }
};



//两位开关
class TwoPositionSwitch:public ISwitch
{
public:
    TwoPositionSwitch(IElectricalEquipment *ee) : ISwitch(ee){}
    
    //用两位开关打开电器
    virtual void On() override
    {
        std::cout << "Switch on the equipment with a two-position switch." << std::endl;
        m_pEe->PowerOn();
    }
    
    //用两位开关关闭电源
    virtual void Off() override
    {
        std::cout << "Switch off the equipment with a two-position switch." << std::endl;
        m_pEe->PowerOff();
    }
    
};

#endif /* refined_abstraction_h */
