//
//  testChainRP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testChainRP_hpp
#define testChainRP_hpp

#include <stdio.h>
#include "concrete_handler.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

void testChainRP();


#endif /* testChainRP_hpp */
