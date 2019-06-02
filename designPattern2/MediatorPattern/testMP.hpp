//
//  testMP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testMP_hpp
#define testMP_hpp

#include <stdio.h>


#include "concrete_colleague.h"
#include "concrete_mediator.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

void testMP();

#endif /* testMP_hpp */
