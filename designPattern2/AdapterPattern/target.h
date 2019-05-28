//
//  target.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef target_h
#define target_h

//俄罗斯提供的插座
class IRussiaSocket
{
public:
    //使用双脚圆形充电（暂不实现）
    virtual void Charge() = 0;
};



#endif /* target_h */
