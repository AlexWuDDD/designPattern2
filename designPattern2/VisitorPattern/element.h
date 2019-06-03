//
//  element.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef element_h
#define element_h

class IVisitor;

// 地方
class IPlace
{
public:
    virtual ~IPlace() {}
    virtual void Accept(IVisitor *visitor) = 0;
};


#endif /* element_h */
