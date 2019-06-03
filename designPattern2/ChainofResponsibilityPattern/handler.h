//
//  handler.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef handler_h
#define handler_h

// 抽象处理者
class IHandler
{
public:
    IHandler() { m_pSuccessor = NULL; }
    virtual ~IHandler() {}
    void SetSuccessor(IHandler *successor) { m_pSuccessor = successor; }
    virtual void HandleRequest(float days) = 0;
    
protected:
    IHandler *m_pSuccessor;  // 后继者
};


#endif /* handler_h */
