//
//  testDP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testDP_hpp
#define testDP_hpp

#include <stdio.h>
#include "concrete_component.hpp"
#include "concrete_decorator.hpp"
#include <iostream>

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

void testDP();

#endif /* testDP_hpp */
