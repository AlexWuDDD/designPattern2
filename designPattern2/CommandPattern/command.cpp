//
//  command.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "command.h"
#include "receiver.hpp"
#include <iostream>

Command::Command(Reciever *reciever)
: m_pReciever(reciever)
{
    
}

// 打车
TakeCommand::TakeCommand(Reciever *reciever)
: Command(reciever)
{
    
}

void TakeCommand::execute()
{
    std::cout << "Take command..." << std::endl;
    m_pReciever->takeOrder();
}

// 付款
PayCommand::PayCommand(Reciever *reciever)
: Command(reciever)
{
    
}

void PayCommand::execute()
{
    std::cout << "Pay command..." << std::endl;
    m_pReciever->receipt();
}

