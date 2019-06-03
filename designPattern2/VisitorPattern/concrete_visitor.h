//
//  concrete_visitor.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_visitor_h
#define concrete_visitor_h

#include "visitor.h"
#include "concrete_element.h"
#include <iostream>

// 游客
class Tourist : public IVisitor
{
public:
    virtual void Visit(BellTower *) override {
        std::cout << "I'm visiting the Bell Tower!" << std::endl;
    }
    
    virtual void Visit(TerracottaWarriors *) override {
        std::cout << "I'm visiting the Terracotta Warriors!" << std::endl;
    }
};

// 清洁工
class Cleaner : public IVisitor
{
public:
    virtual void Visit(BellTower *) override {
        std::cout << "I'm cleaning up the garbage of Bell Tower!" << std::endl;
    }
    
    virtual void Visit(TerracottaWarriors *) override {
        std::cout << "I'm cleaning up the garbage of Terracotta Warriors!" << std::endl;
    }
};

#endif /* concrete_visitor_h */
