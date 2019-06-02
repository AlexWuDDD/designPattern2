//
//  testMementoP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testMementoP_hpp
#define testMementoP_hpp

#include <stdio.h>

#include "originator.h"
#include "care_taker.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

void testMementoP();


#endif /* testMementoP_hpp */
