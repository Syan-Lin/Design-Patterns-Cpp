#pragma once

#include <iostream>
#include "Math.h"

class TextProcess{
public:
    virtual std::string add(std::string, std::string) = 0;
    virtual std::string sub(std::string, std::string) = 0;
};

// 文本处理类，只能接受和返回字符串
class TextProcessor : public TextProcess{
public:
    std::string add(std::string a, std::string b) override {
        int result = math.add(std::atoi(a.c_str()), std::atoi(b.c_str()));
        return std::to_string(result);
    }
    std::string sub(std::string a, std::string b) override {
        int result = math.sub(std::atoi(a.c_str()), std::atoi(b.c_str()));
        return std::to_string(result);
    }
private:
    Math math;
};
