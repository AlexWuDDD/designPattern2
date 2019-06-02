//
//  mediator.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef mediator_h
#define mediator_h

#include "colleague.h"
#include <list>

class IColleague;

// 抽象中介者
class IMediator
{
public:
    // 注册参与者
    virtual void registerColleague(IColleague* colleague) { m_colleagues.emplace_back(colleague); }
    const std::list<IColleague*>& getColleagues() const { return m_colleagues; }
    
    // 将发送者的消息发送给所有参与者
    virtual void distributeMessage(const IColleague* sender, const std::string& message) const = 0;
    
private:
    std::list<IColleague*> m_colleagues;
};

#endif /* mediator_h */
