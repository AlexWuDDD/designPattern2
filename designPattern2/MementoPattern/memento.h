//
//  memento.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef memento_h
#define memento_h


#include <iostream>
#include <string>

// 日期时间
class DateTime
{
public:
    DateTime(std::string dt)
    : m_dateTime(dt) {}
    
    void SetDateTime(std::string dt) {
        m_dateTime = dt;
    }
    
    std::string GetDateTime() {
        return m_dateTime;
    }
    
private:
    std::string m_dateTime;
};

#endif /* memento_h */
