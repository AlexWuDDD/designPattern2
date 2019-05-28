//
//  concrete_decorator.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_decorator_hpp
#define concrete_decorator_hpp

#include <stdio.h>
#include "decorator.hpp"

/********* 具体的饮料 （调味品）************/
//奶油
class Cream : public CondimentDecorator
{
public:
    Cream(IBeverage *beverage) : CondimentDecorator(beverage){}
    string Name(){
        return m_pBeverage->Name() + "Cream";
    }
    double Cost(){
        return m_pBeverage->Cost() + 3.5;
    }
};

// 摩卡
class Mocha : public CondimentDecorator
{
public:
    Mocha(IBeverage *beverage) : CondimentDecorator(beverage) {}
    
    string Name() {
        return m_pBeverage->Name() + " Mocha";
    }
    
    double Cost() {
        return m_pBeverage->Cost() + 2.0;
    }
};

// 糖浆
class Syrup : public CondimentDecorator
{
public:
    Syrup(IBeverage *beverage) : CondimentDecorator(beverage) {}
    
    string Name() {
        return m_pBeverage->Name() + " Syrup";
    }
    
    double Cost() {
        return m_pBeverage->Cost() + 3.0;
    }
};




#endif /* concrete_decorator_hpp */
