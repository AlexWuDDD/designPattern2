//
//  object_structure.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef object_structure_h
#define object_structure_h

#include "element.h"
#include <list>

// 城市（西安）
class City
{
public:
    void Attach(IPlace *place) {
        m_places.push_back(place);
    }
    
    void Detach(IPlace *place) {
        m_places.remove(place);
    }
    
    void Accept(IVisitor *visitor) {
        // 为每一个 element 设置 visitor，进行对应的操作
        for (std::list<IPlace*>::iterator it = m_places.begin(); it != m_places.end(); ++it) {
            (*it)->Accept(visitor);
        }
    }
    
private:
    std::list<IPlace *> m_places;
};

#endif /* object_structure_h */
