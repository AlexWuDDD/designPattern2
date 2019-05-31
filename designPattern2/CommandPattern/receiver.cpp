//
//  receiver.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "receiver.hpp"

#include <iostream>

// 接单
void Reciever::takeOrder()
{
    std::cout << "Take order..." << std::endl;
}

// 收款
void Reciever::receipt()
{
    std::cout << "Receipt..." << std::endl;
}

