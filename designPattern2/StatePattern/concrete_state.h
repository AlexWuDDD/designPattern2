//
//  concrete_state.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_state_h
#define concrete_state_h

#include "state.h"

class TrafficLights;

// 红灯
class RedLight : public IState
{
public:
    RedLight(TrafficLights* context);
    virtual void Handle() override;
    
private:
    TrafficLights* m_pContext;
};

// 绿灯
class GreenLight : public IState
{
public:
    GreenLight(TrafficLights* context);
    virtual void Handle() override;
    
private:
    TrafficLights* m_pContext;
};

// 黄灯
class YellowLight : public IState
{
public:
    YellowLight(TrafficLights* context);
    virtual void Handle() override;
    
private:
    TrafficLights* m_pContext;
};

#endif /* concrete_state_h */
