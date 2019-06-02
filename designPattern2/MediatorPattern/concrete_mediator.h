//
//  concrete_mediator.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_mediator_h
#define concrete_mediator_h

#include "mediator.h"

// 具体中介者
class ConcreteMediator : public IMediator
{
public:
    // 将发送者的消息发送给所有参与者（但不包括发送者自己）
    virtual void distributeMessage(const IColleague* sender, const std::string& message) const override {
        for (const IColleague* c : getColleagues())
            if (c != sender)  // 不要将消息发送给自己
                c->receiveMessage(sender, message);
    }
};



#endif /* concrete_mediator_h */
