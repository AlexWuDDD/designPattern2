//
//  testChainRP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testChainRP.hpp"

void testChainRP()
{
    IHandler *manager = new Manager();
    IHandler *director = new Director();
    IHandler *ceo = new CEO();
    
    // 职责链：经理 -> 总监 -> 总裁
    manager->SetSuccessor(director);
    director->SetSuccessor(ceo);
    
    manager->HandleRequest(1);
    manager->HandleRequest(2);
    manager->HandleRequest(5);
    manager->HandleRequest(10);
    
    SAFE_DELETE(manager);
    SAFE_DELETE(director);
    SAFE_DELETE(ceo);
    
    getchar();
}
