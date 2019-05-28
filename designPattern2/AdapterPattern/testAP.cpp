//
//  testAP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testAP.hpp"

void testAP()
{
    //创建适配器
    IRussiaSocket *pAdapter = new PowerAdapter();
    
    //充电
    pAdapter->Charge();
    
    SAFE_DELETE(pAdapter);
    
    getchar();
    
    return;
}
