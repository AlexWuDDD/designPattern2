//
//  leaf.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/29.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef leaf_h
#define leaf_h

#include "component.h"

class Leaf : public Component
{
public:
    Leaf(string name) :Component(name){}
    virtual ~Leaf(){}
    void Add(Component *cmpt)
    {
        cout << "Can't add to a Leaf" << endl;
    }
    
    void Remove(Component *cmpt)
    {
        cout << "Can't remove from a Leaf" << endl;
    }
    
    Component *GetChild(int index)
    {
        cout << "Can't get child from a Leaf" << endl;
        return NULL;
    }
    
    void Operation(int indent)
    {
        string newStr(indent, '-');
        cout << newStr << "" << m_strName << endl;
    }
    
private:
    Leaf();
    
    
    
};

#endif /* leaf_h */
