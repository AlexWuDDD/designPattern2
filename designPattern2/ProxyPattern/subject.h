//
//  subject.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef subject_h
#define subject_h
// 电信运营商
class ITelco
{
public:
    virtual ~ITelco(){}
    virtual void Recharge(int money) = 0;  // 充值
};

#endif /* subject_h */
