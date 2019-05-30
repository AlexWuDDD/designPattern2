//
//  flyweight_factory.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/30.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef flyweight_factory_h
#define flyweight_factory_h

#include "concrete_flyweight.h"
#include <map>

// 用于获取玩家
class PlayerFactory
{
public:
    // 如果 T/CT 对象存在，则直接从享元池获取；否则，创建一个新对象并添加到享元池中，然后返回。
    static IPlayer* getPlayer(std::string type)
    {
        IPlayer *p = NULL;
        if (m_map.find(type) != m_map.end()) {
            p = m_map[type];
        }
        else {
            // 创建 T/CT 对象
            if (type == "T") {
                std::cout << "Terrorist Created" << std::endl;
                p = new Terrorist();
            }
            else if (type == "CT") {
                std::cout << "Counter Terrorist Created" << std::endl;
                p = new CounterTerrorist();
            }
            else {
                std::cout << "Unreachable code!" << std::endl;
            }
            // 一旦创建，将其插入到 map 中
            m_map.insert(std::make_pair(type, p));
        }
        return p;
    }
    
    static void clear()
    {
        while(!m_map.empty()){
            auto it = m_map.begin();
            delete it->second;
            m_map.erase(it);
        }
    }
    
private:
    // 存储 T/CT 对象（享元池）
    static std::map<std::string, IPlayer*> m_map;
};


#endif /* flyweight_factory_h */
