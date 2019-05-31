//
//  testObserverP.hpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef testObserverP_hpp
#define testObserverP_hpp

#include <stdio.h>

#include "concrete_subject.h"
#include "concrete_observer.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) { if(p){delete(p); (p)=NULL;} }
#endif

void testObserveP();

#endif /* testObserverP_hpp */
