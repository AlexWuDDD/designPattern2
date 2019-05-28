//
//  component.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef component_hpp
#define component_hpp

#include <stdio.h>
#include <string>
using std::string;

//所有饮料的基类
class IBeverage
{
public:
    virtual ~IBeverage(){};
    virtual string Name() = 0; //名称
    virtual double Cost() = 0; //价钱
};

#endif /* component_hpp */
