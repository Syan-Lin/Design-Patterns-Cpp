#pragma once

#include "Charactor.h"
#include <time.h>
#include <windows.h>

class Memento{
    // 只有 Charactor 可以访问到内部数据
    friend class Charactor;
public:
    Memento(int health, int magic): health_(health), magic_(magic){
        SYSTEMTIME sys;
        GetLocalTime(&sys);
        time_ = std::to_string(sys.wYear) + '-' + std::to_string(sys.wMonth) + '-' + std::to_string(sys.wDay) + ' '
                + std::to_string(sys.wHour) + ':' + std::to_string(sys.wMinute) + ':' + std::to_string(sys.wSecond)
                + " ms: " + std::to_string(sys.wMilliseconds);
    }
    void print(){
        std::cout << "=======Memento=======" << std::endl;
        std::cout << "生命值：" << health_ << std::endl;
        std::cout << "魔力值：" << magic_ << std::endl;
        std::cout << "存档时间：" << time_ << std::endl;
        std::cout << "=====================" << std::endl;
    }
private:
    int health_;
    int magic_;
    std::string time_;
};
