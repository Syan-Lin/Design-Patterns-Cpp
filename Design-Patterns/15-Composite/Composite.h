#pragma once

#include <iostream>
#include <vector>
#include <memory>

class Component{
public:
    Component(std::string name) : name_(name){}
    Component(std::string name, int size) : name_(name), size_(size){}
    virtual void add(std::shared_ptr<Component>){}
    virtual void remove(std::shared_ptr<Component>){}
    virtual void print(int depth = 1){
        std::string prefix(depth * 2, '-');
        std::cout << prefix << name_ << "(" << getSize() << "kb)" << std::endl;
    }
    virtual int getSize(){
        return size_;
    }

protected:
    std::string name_;
    int size_;
};

class File : public Component{
public:
    File(std::string name, int size) : Component(name, size){}
    void add(std::shared_ptr<Component>) override {
        std::cout << "File cannot add a child!" << std::endl;
    }
    void remove(std::shared_ptr<Component>) override {
        std::cout << "File cannot remove a child!" << std::endl;
    }
    void print(int depth = 1) override {
        Component::print(depth);
    }
};

class Directory : public Component{
public:
    Directory(std::string name) : Component(name){}
    void add(std::shared_ptr<Component> child) override {
        children_.push_back(child);
    }
    void remove(std::shared_ptr<Component> child) override {
        for(auto iter = children_.begin(); iter != children_.end(); iter++){
            if(*iter == child){
                children_.erase(iter);
                break;
            }
        }
    }
    void print(int depth = 1) override {
        Component::print(depth);
        for(auto& e : children_){
            e->print(depth + 1);
        }
    }
    int getSize() override {
        int result = 0;
        for(auto& e : children_){
            result += e->getSize();
        }
        return result;
    }
private:
    std::vector<std::shared_ptr<Component>> children_;
};
