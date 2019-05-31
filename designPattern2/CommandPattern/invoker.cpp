//
//  invoker.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "invoker.hpp"

Invoker::Invoker()
{
    
}

void Invoker::addCmd(Command *cmd)
{
    m_cmds.push_back(cmd);
}

void Invoker::deleteCmd(Command *cmd)
{
    m_cmds.remove(cmd);
}

void Invoker::notify()
{
    std::list<Command *>::iterator it = m_cmds.begin();
    while (it != m_cmds.end()) {
        (*it)->execute();
        ++it;
    }
}

