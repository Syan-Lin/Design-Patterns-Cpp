#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <algorithm>

class Receiver{
public:
    void action1(){
        std::cout << "action1." << std::endl;
    }
    void action2(){
        std::cout << "action2." << std::endl;
    }
    void action3(){
        std::cout << "action3." << std::endl;
    }
};

class Command{
public:
    Command(std::shared_ptr<Receiver> receiver) : receiver_(receiver) {}
    virtual void execute() = 0;
protected:
    std::shared_ptr<Receiver> receiver_;
};

class ConcreteCommandOne : public Command{
public:
    ConcreteCommandOne(std::shared_ptr<Receiver> receiver) : Command(receiver) {}
    void execute() override {
        std::cout << "Command One:" << std::endl;
        receiver_->action3();
        receiver_->action1();
        std::cout << "Command over" << std::endl;
    }
};

class ConcreteCommandTwo : public Command{
public:
    ConcreteCommandTwo(std::shared_ptr<Receiver> receiver) : Command(receiver) {}
    void execute() override {
        std::cout << "Command Two:" << std::endl;
        receiver_->action2();
        receiver_->action3();
        std::cout << "Command over" << std::endl;
    }
};

class Invoker{
public:
    void addCommand(std::shared_ptr<Command> command){
        commands_.push_back(command);
    }
    void execute(){
        for(auto& command : commands_){
            command->execute();
        }
        commands_.clear();
    }
private:
    std::vector<std::shared_ptr<Command>> commands_;
};
