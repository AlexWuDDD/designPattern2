//
//  leaf.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/29.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef leaf_h
#define leaf_h

class Leaf : public Component
{
public:
    Leaf(string name) : Component(name){}
    virtual ~Leaf(){}
    void Operation(int indent) {
        string newStr(indent, '-');
        cout << newStr << " " << m_strName <<endl;
    }
    
private:
    Leaf();  // 不允许
};

#endif /* leaf_h */
