//
//  adaptee.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef adaptee_h
#define adaptee_h

#include <iostream>

//自带的充电器-两脚扁形
class OwnCharger
{
public:
  void ChargeWithFeetFlat()
    {
        std::cout << "OwnCharger::ChargeWithFeetFlat" << std::endl;
    }
};




#endif /* adaptee_h */
