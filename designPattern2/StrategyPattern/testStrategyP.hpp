//
//  testStrategyP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testStrategyP_hpp
#define testStrategyP_hpp

#include <stdio.h>


#include "context.h"
#include "concrete_strategy.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

void testStrateP();

#endif /* testStrategyP_hpp */
