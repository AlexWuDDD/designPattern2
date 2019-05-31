//
//  testTMP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testTMP.hpp"

void testTMP()
{
    // 阿里校招
    Company *alibaba = new Alibaba();
    alibaba->Recruit();
    
    // 腾讯校招
    Company *tencent = new Tencent();
    tencent->Recruit();
    
    SAFE_DELETE(tencent);
    SAFE_DELETE(alibaba);
    
    getchar();
}
