//
//  concrete_element.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_element_h
#define concrete_element_h


#include "element.h"
#include "visitor.h"
#include <iostream>

// 钟楼
class BellTower : public IPlace
{
public:
    virtual void Accept(IVisitor *visitor) override {
        std::cout << "Bell Tower is accepting visitor." << std::endl;
        visitor->Visit(this);
    }
};

// 兵马俑
class TerracottaWarriors : public IPlace
{
public:
    virtual void Accept(IVisitor *visitor) override {
        std::cout << "Terracotta Warriors is accepting visitor." << std::endl;
        visitor->Visit(this);
    }
};


#endif /* concrete_element_h */
