//
//  implementor.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef implementor_h
#define implementor_h

//电器
//所有电器都有一些共性，可以被打开h和关闭
class IElectricalEquipment
{
public:
    virtual ~IElectricalEquipment(){}
    
    //打开
    virtual void PowerOn()= 0;
    //关闭
    virtual void PowerOff() = 0;
};


#endif /* implementor_h */
