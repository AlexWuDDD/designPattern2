//
//  testVP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testVP_hpp
#define testVP_hpp

#include <stdio.h>

#include "concrete_visitor.h"
#include "object_structure.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif


void testVP();

#endif /* testVP_hpp */
