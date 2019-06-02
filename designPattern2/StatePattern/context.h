//
//  context.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef context_h
#define context_h

#include "concrete_state.h"

// 交通信号灯
class TrafficLights
{
public:
    TrafficLights() { m_pState = new RedLight(this); }
    void SetState(IState* state) { m_pState = state; }
    void Request() { m_pState->Handle(); }
    
private:
    IState* m_pState;
};



#endif /* context_h */
