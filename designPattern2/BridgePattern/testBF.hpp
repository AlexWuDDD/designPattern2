//
//  testBF.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testBF_hpp
#define testBF_hpp

#include <stdio.h>

#include "refined_abstraction.h"
#include "concrete_implementor.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p); (p)=NULL;}}
#endif

void testBP();

#endif /* testBF_hpp */
