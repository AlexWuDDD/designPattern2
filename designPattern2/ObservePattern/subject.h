//
//  subject.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef subject_h
#define subject_h

class IObserver;

// 抽象主题
class ISubject
{
public:
    virtual void Attach(IObserver *) = 0;  // 注册观察者
    virtual void Detach(IObserver *) = 0;  // 注销观察者
    virtual void Notify() = 0;  // 通知观察者
};


#endif /* subject_h */
