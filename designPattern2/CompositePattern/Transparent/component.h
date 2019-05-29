//
//  component.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/29.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef component_h
#define component_h

#include <iostream>
#include <string>

using namespace std;

class Component
{
public:
    Component(string name) : m_strName(name){}
    virtual ~Component(){}
    virtual void Add(Component *cmpt) = 0; //添加构件
    virtual void Remove(Component *cmpt) = 0 ; //删除构件
    virtual Component* GetChild(int index) = 0; //获取构件
    virtual void Operation(int indent) = 0; //显示构件（以缩进的方式）
private:
    Component();
protected:
    string m_strName;
};



#endif /* component_h */
