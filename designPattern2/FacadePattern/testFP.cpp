//
//  testFP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testFP.hpp"

#include "testFP.hpp"

void testFP()
{
    OnlineShoppingFacade facade;
    
    // 提交订单
    facade.submitRequest();
    
    // 跟踪订单，直到订单完成
    while (!facade.checkStatus());
    
    std::cout << "********** 订单完成，跟踪次数：" << facade.followupNum() << " **********" << std::endl;
    
    getchar();
    

}
