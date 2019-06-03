//
//  visitor.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/4.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef visitor_h
#define visitor_h

class BellTower;
class TerracottaWarriors;

// 访问者
class IVisitor
{
public:
    virtual ~IVisitor() {}
    virtual void Visit(BellTower *) = 0;
    virtual void Visit(TerracottaWarriors *) = 0;
};


#endif /* visitor_h */
