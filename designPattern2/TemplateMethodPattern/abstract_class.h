//
//  abstract_class.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef abstract_class_h
#define abstract_class_h

#include <iostream>

//公司
class Company
{
public:
    virtual ~Company(){}
    
    // 校园招聘
    void Recruit() {
        std::cout << "---------- Begin ----------" << std::endl;
        CareerTalk();
        ReceiveResume();
        Interview();
        Offer();
        std::cout << "---------- End ----------" << std::endl;
    }
    
    // 宣讲会
    void CareerTalk() {
        std::cout << "Delivery" << std::endl;
    }
    
    // 接收简历
    void ReceiveResume() {
        std::cout << "Receive Resume" << std::endl;
    }
    
    // 面试
    virtual void Interview() = 0;
    
    // 发放 Offer
    virtual void Offer() = 0;
};



#endif /* abstract_class_h */
