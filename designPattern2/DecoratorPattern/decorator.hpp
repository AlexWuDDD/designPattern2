//
//  decorator.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef decorator_hpp
#define decorator_hpp

#include <stdio.h>

#include "component.hpp"
//调味品
class CondimentDecorator : public IBeverage
{
public:
    CondimentDecorator(IBeverage *beverage):m_pBeverage(beverage){};
    string Name()
    {
        return m_pBeverage->Name();
    }
    
    double Cost()
    {
        return m_pBeverage->Cost();
    }
    
protected:
    IBeverage *m_pBeverage;
};




#endif /* decorator_hpp */
