//
//  real_subject.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef real_subject_h
#define real_subject_h

#include "subject.h"
#include <iostream>

// 中国移动
class CMCC : public ITelco
{
public:
    void Recharge(int money) override {
        std::cout << "Recharge " << money;
    }
};


#endif /* real_subject_h */
