//
//  testCommandP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testCommandP.hpp"

void testCommandP()
{
    Reciever *rev = new Reciever();
    Command *cmd1 = new TakeCommand(rev);
    PayCommand *cmd2 = new PayCommand(rev);
    Invoker inv;
    
    inv.addCmd(cmd1);
    inv.addCmd(cmd2);
    inv.notify();
    
    delete cmd1;
    delete cmd2;
    delete rev;
}
