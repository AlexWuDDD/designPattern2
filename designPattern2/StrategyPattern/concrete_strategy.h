//
//  concrete_strategy.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_strategy_h
#define concrete_strategy_h

#include "strategy.h"
#include <iostream>

// 骑自行车
class BikeStrategy : public IStrategy
{
public:
    virtual void Travel() override { std::cout << "Travel by bike" << std::endl; }
};

// 开车
class CarStrategy : public IStrategy
{
public:
    virtual void Travel() override { std::cout << "Travel by car" << std::endl; }
};

// 坐火车
class TrainStrategy : public IStrategy
{
public:
    virtual void Travel() override { std::cout << "Travel by train" << std::endl; }
};

#endif /* concrete_strategy_h */
