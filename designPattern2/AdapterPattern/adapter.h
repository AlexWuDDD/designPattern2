//
//  adapter.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/28.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef adapter_h
#define adapter_h

#include "target.h"
#include "adaptee.h"

#ifndef SAFE_DELETE
#define SAFE_DELETE(p) {if(p){delete(p); (p)=NULL;}}
#endif

////电源适配器
//class PowerAdapter : public IRussiaSocket
//{
//public:
//    PowerAdapter():m_pCharger(new OwnCharger()){};
//    ~PowerAdapter(){
//        SAFE_DELETE(m_pCharger);
//    }
//
//    void Charge(){
//        //使用自带的充电器（两脚扁形）充电
//        m_pCharger->ChargeWithFeetFlat();
//    }
//private:
//    OwnCharger *m_pCharger; //持有需要被适配的接口对象-自带的充电器
//};

class PowerAdapter : public IRussiaSocket, OwnCharger
{
public:
    PowerAdapter(){}
    void Charge()
    {
        ChargeWithFeetFlat();
    }
};

#endif /* adapter_h */
