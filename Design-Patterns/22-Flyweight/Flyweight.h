#pragma once

#include <iostream>
#include <memory>
#include <vector>
#include <map>

class Flyweight{
public:
    Flyweight(int num){
        std::cout << "Construct char" << num << std::endl;
        switch(num){
            case 0:
                data_ = "....####....\n..##....##..\n..##....##..\n..##....##..\n..##....##..\n..##....##..\n....####....\n";
                break;
            case 1:
                data_ = "......##....\n..######....\n......##....\n......##....\n......##....\n......##....\n..########..\n";
                break;
            case 2:
                data_ = "....####....\n..##....##..\n........##..\n....####....\n..##........\n..##........\n..########..\n";
                break;
        }
    }
    std::string& getString(){
        return data_;
    }
protected:
    std::string data_;
};

class FlyweightFactory{
public:
    std::string& getChar(int num){
        if(num < 0 || num > 2){
            throw;
        }
        if(mp_.find(num) == mp_.end()){
            mp_[num] = new Flyweight(num);
        }
        return mp_[num]->getString();
    }
private:
    std::map<int, Flyweight*> mp_;
};
