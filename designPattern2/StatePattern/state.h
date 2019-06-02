//
//  state.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef state_h
#define state_h


// 信号灯的状态
class IState
{
public:
    virtual void Handle() = 0;
};

#endif /* state_h */
