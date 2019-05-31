//
//  concrete_observer.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef concrete_observer_h
#define concrete_observer_h

#include "observer.h"
#include <iostream>
#include <string>

using namespace std;

// 具体观察者
class ConcreteObserver : public IObserver
{
public:
    ConcreteObserver(string name) { m_strName = name; }
    
    void Update(float price) {
        cout << m_strName << " - price: " << price << "\n";
    }
    
private:
    string m_strName;  // 名字
};

#endif /* concrete_observer_h */
