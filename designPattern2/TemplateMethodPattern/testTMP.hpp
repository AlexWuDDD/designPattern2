//
//  testTMP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testTMP_hpp
#define testTMP_hpp

#include <stdio.h>

#include "concrete_class.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p);(p)=NULL;}}
#endif

void testTMP();

#endif /* testTMP_hpp */
