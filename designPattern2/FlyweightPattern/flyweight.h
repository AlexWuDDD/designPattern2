//
//  flyweight.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef flyweight_h
#define flyweight_h

#include <iostream>

//玩家 - 有武器和使命
class IPlayer
{
public:
    virtual ~IPlayer(){}
    
    //分配武器
    virtual void assignWeapon(std::string weapon) = 0;
    
    //使命
    virtual void mission() = 0;
    
protected:
    std::string m_task; //内部状态
    std::string m_weapon; //外部状态
};




#endif /* flyweight_h */
