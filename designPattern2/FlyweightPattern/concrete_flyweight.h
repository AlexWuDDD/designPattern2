//
//  concrete_flyweight.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_flyweight_h
#define concrete_flyweight_h

#include "flyweight.h"

// 恐怖分子
class Terrorist : public IPlayer
{
public:
    Terrorist() {
        m_task = "Plant a bomb";
    }
    
    virtual void assignWeapon(std::string weapon) override {
        m_weapon = weapon;
    }
    
    virtual void mission() override {
        std::cout << "Terrorist with weapon " + m_weapon + "," + " Task is " + m_task << std::endl;
    }
};

// 反恐精英
class CounterTerrorist : public IPlayer
{
public:
    CounterTerrorist() {
        m_task = "Diffuse bomb";
    }
    
    virtual void assignWeapon(std::string weapon) override {
        m_weapon = weapon;
    }
    
    virtual void mission() override {
        std::cout << "Counter Terrorist with weapon " + m_weapon + "," + " Task is " + m_task << std::endl;
    }
};

#endif /* concrete_flyweight_h */
