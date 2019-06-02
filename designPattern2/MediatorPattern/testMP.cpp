//
//  testMP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testMP.hpp"

void testMP()
{
    // 房东
    IColleague *landlord = new ConcreteColleague("Tom");
    
    // 租客
    IColleague *jerry = new ConcreteColleague("Jerry");
    IColleague *tuffy = new ConcreteColleague("Tuffy");
    
    // 中介者 - 添加租客
    ConcreteMediator mediator;
    mediator.registerColleague(jerry);
    mediator.registerColleague(tuffy);
    
    // 房东通过中介将消息发送出去
    landlord->sendMessage(mediator, "Xi'erqi, two bedroom house, 6000/month.");
    
    SAFE_DELETE(jerry);
    SAFE_DELETE(tuffy);
    
    getchar();
    
}
