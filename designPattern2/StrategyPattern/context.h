//
//  context.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef context_h
#define context_h

#include "strategy.h"

class Context
{
public:
    Context(IStrategy *strategy) { m_pStrategy = strategy; }
    void Travel() { m_pStrategy->Travel(); }
    
private:
    IStrategy *m_pStrategy;
};


#endif /* context_h */
