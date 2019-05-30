//
//  testFlyweight.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testFlyweight.hpp"

void testFlyweight()
{
    srand((unsigned)time(NULL));
    
    int playerLen;
    int weaponsLen;
    GET_ARRAY_LEN(s_playerType, playerLen);
    GET_ARRAY_LEN(s_weapons, weaponsLen);
    
    // 假设，游戏中有十位玩家
    for (int i = 0; i < 10; i++) {
        // 获取随机玩家和武器
        int typeIndex = rand() % playerLen;
        int weaponIndex = rand() % weaponsLen;
        std::string type = s_playerType[typeIndex];
        std::string weapon = s_weapons[weaponIndex];
        
        // 获取玩家
        IPlayer *p = PlayerFactory::getPlayer(type);
        
        // 从武器库中随机分配武器
        p->assignWeapon(weapon);
        
        // 派玩家去执行任务
        p->mission();
    }
    
    PlayerFactory::clear();
    getchar();
    
    return;
}
