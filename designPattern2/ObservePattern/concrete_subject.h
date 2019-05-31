//
//  concrete_subject.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_subject_h
#define concrete_subject_h

#include "subject.h"
#include "observer.h"
#include <iostream>
#include <list>

using namespace std;

// 具体主题
class ConcreteSubject : public ISubject
{
public:
    ConcreteSubject() { m_fPrice = 10.0; }
    
    void SetPrice(float price) {
        m_fPrice = price;
    }
    
    void Attach(IObserver *observer) {
        m_observers.push_back(observer);
    }
    
    void Detach(IObserver *observer) {
        m_observers.remove(observer);
    }
    
    void Notify() {
        list<IObserver *>::iterator it = m_observers.begin();
        while (it != m_observers.end()) {
            (*it)->Update(m_fPrice);
            ++it;
        }
    }
    
private:
    list<IObserver *> m_observers;  // 观察者列表
    float m_fPrice;  // 价格
};




#endif /* concrete_subject_h */
