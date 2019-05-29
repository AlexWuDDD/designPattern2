//
//  main.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include <iostream>
#include "AdapterPattern/testAP.hpp"
#include "BridgePattern/testBF.hpp"
#include "DecoratorPattern/testDP.hpp"
#include "CompositePattern/Transparent/testCPT.hpp"

int main(int argc, const char * argv[]) {
    // insert code here...
    std::cout << "Hello, World!\n";
    //testAP();
    //testBP();
    //testDP();
    testCPT();
    return 0;
    
}
