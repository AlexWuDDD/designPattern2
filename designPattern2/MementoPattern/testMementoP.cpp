//
//  testMementoP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testMementoP.hpp"

void testMementoP()
{
    Life *life = new Life();
    PandoraBox *box = new PandoraBox(life);
    
    // 设置并保存一个历史时间
    life->SetDateTime("2000/10/01 00:00:00");
    box->Save();
    
    // 设置并保存一个历史时间
    life->SetDateTime("2010/10/01 00:00:00");
    box->Save();
    
    // 设置一个历史时间
    life->SetDateTime("2018/10/01 00:00:00");
    
    // 穿越
    box->Undo();
    std::cout << "Actual date time is " << life->GetDateTime() << std::endl;
    
    // 再次穿越
    box->Undo();
    std::cout << "Actual date time is " << life->GetDateTime() << std::endl;
    
    SAFE_DELETE(life);
    SAFE_DELETE(box);
    
    getchar();
}
