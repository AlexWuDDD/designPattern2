//
//  command.h
//  designPattern2
//
//  Created by Wu.Alex on 2019/5/31.
//  Copyright © 2019 Wu.Alex. All rights reserved.
//

#ifndef command_h
#define command_h


class Reciever;

// 提供执行命令的接口
class Command
{
public:
    Command(Reciever *reciever);
    virtual void execute() = 0;  // 执行命令
protected:
    Reciever *m_pReciever;
};

// 打车
class TakeCommand : public Command
{
public:
    TakeCommand(Reciever *reciever);
    void execute();
};

// 付款
class PayCommand : public Command
{
public:
    PayCommand(Reciever *reciever);
    void execute();
};

#endif /* command_h */
