//
//  concrete_class.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_class_h
#define concrete_class_h

#include "abstract_class.h"
#include <iostream>

// 阿里
class Alibaba : public Company
{
public:
    virtual void Interview() override {
        std::cout << "First interview -> Second interview -> Third interview" << std::endl;
    }
    
    virtual void Offer() override {
        std::cout << "30W" << std::endl;
    }
};

// 腾讯
class Tencent : public Company
{
public:
    virtual void Interview() override {
        std::cout << "First interview -> Second interview" << std::endl;
    }
    
    virtual void Offer() override {
        std::cout << "25W" << std::endl;
    }
};


#endif /* concrete_class_h */
