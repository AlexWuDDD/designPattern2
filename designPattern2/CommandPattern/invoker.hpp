//
//  invoker.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef invoker_hpp
#define invoker_hpp

#include <stdio.h>
#include <list>
#include "command.h"

class Invoker
{
public:
    Invoker();
    void addCmd(Command *cmd);  // 添加命令
    void deleteCmd(Command *cmd);  // 删除命令
    void notify();  // 执行命令
    
private:
    std::list<Command *> m_cmds;  // 命令队列
};



#endif /* invoker_hpp */
