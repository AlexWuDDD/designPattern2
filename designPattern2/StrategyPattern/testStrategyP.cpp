//
//  testStrategyP.cpp
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#include "testStrategyP.hpp"

void testStrateP()
{
    IStrategy *bike = new BikeStrategy();
    IStrategy *car = new CarStrategy();
    IStrategy *train = new TrainStrategy();
    
    Context *bikeContext = new Context(bike);
    Context *carContext = new Context(car);
    Context *trainContext = new Context(train);
    
    bikeContext->Travel();
    carContext->Travel();
    trainContext->Travel();
    
    SAFE_DELETE(bike);
    SAFE_DELETE(car);
    SAFE_DELETE(train);
    
    SAFE_DELETE(bikeContext);
    SAFE_DELETE(carContext);
    SAFE_DELETE(trainContext);
    
    getchar();
}
