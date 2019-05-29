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
    Component(string name) : m_strName(name) {}
    virtual ~Component() {}
    virtual void Operation(int indent) = 0;  // 显示构件（以缩进的方式）
    
private:
    Component();  // 不允许
    
protected:
    string m_strName;
};


/*******************************/
//注意： 与透明模式不同，这里已经没有了访问及管理子构件的接口，所有的接口都在 Composite 中，不再赘述（同上）。
/*******************************/
#endif /* component_h */
