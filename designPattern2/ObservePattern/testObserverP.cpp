//
//  testObserverP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testObserverP.hpp"

void testObserveP()
{
    // 创建主题、观察者
    ConcreteSubject *pSubject = new ConcreteSubject();
    IObserver *pObserver1 = new ConcreteObserver("Jack Ma");
    IObserver *pObserver2 = new ConcreteObserver("Pony");
    
    // 注册观察者
    pSubject->Attach(pObserver1);
    pSubject->Attach(pObserver2);
    
    // 更改价格，并通知观察者
    pSubject->SetPrice(12.5);
    pSubject->Notify();
    
    // 注销观察者
    pSubject->Detach(pObserver2);
    // 再次更改状态，并通知观察者
    pSubject->SetPrice(15.0);
    pSubject->Notify();
    
    SAFE_DELETE(pObserver1);
    SAFE_DELETE(pObserver2);
    SAFE_DELETE(pSubject);
    
    getchar();
    
}
