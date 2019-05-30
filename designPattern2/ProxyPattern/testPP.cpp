//
//  testPP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testPP.hpp"

#include "proxy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

void testPP()
{
    Proxy* proxy = new Proxy();
    proxy->Recharge(20);
    proxy->Recharge(100);
    
    SAFE_DELETE(proxy);
    
    getchar();
    
}

