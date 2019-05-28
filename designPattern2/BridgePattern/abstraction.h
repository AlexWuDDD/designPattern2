//
//  abstraction.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef abstraction_h
#define abstraction_h

#include "implementor.h"

class ISwitch
{
public:
    ISwitch(IElectricalEquipment *ee)
    {
        m_pEe = ee;
    }
    
    //打开电器
    virtual void On() = 0;
    
    //关闭电器
    virtual void Off() = 0;
    
protected:
    IElectricalEquipment *m_pEe;
};



#endif /* abstraction_h */
