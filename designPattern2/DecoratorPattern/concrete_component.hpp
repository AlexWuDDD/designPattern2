//
//  concrete_component.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_component_hpp
#define concrete_component_hpp

#include <stdio.h>
#include "component.hpp"

/****** 具体的饮料 （咖啡）*******/
//黑咖啡, 属于混合咖啡
class HouseBlend : public IBeverage
{
public:
    string Name()
    {
        return "HouseBlend";
    }
    
    double Cost()
    {
        return 30.0;
    }
};

// 深度烘培咖啡豆
class DarkRoast : public IBeverage
{
public:
    string Name() {
        return "DarkRoast";
    }
    
    double Cost() {
        return 28.5;
    }
};

#endif /* concrete_component_hpp */
