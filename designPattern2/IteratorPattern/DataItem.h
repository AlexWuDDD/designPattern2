//
//  DataItem.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/6/3.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef DataItem_h
#define DataItem_h

#include <string>
using std::string;

class DataItem
{
public:
    DataItem(int id, const string &name, const string &des)
    {
        this->id = id;
        this->name = name;
        this->des = des;
    }
private:
    int id;
    string name;
    string des;
    
}



#endif /* DataItem_h */
