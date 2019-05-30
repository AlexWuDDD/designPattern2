//
//  testFlyweight.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testFlyweight_hpp
#define testFlyweight_hpp

#include <iostream>
#include <ctime>
#include "concrete_flyweight.h"
#include "flyweight_factory.h"

#ifndef GET_ARRAY_LEN
#define GET_ARRAY_LEN(array, len) {(len) = (sizeof(array) / sizeof(array[0]));}
#endif


// 玩家类型和武器
const std::string s_playerType[2] = { "T", "CT" };
const std::string s_weapons[4] = { "AK-47", "Maverick", "Gut Knife", "Desert Eagle" };

void testFlyweight();



#endif /* testFlyweight_hpp */
