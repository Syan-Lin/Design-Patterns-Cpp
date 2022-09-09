#pragma once

#include "TextBuilder.h"
#include <iostream>
#include <memory>

class Director{
public:
    Director(){};
    void setBuilder(std::shared_ptr<Builder> builder){
        this->builder = builder;
    }
    std::string makeArticle(){
        using namespace std;
        if(builder == nullptr){
            throw;
        }
        std::string product;
        product += "=======================\n";
        product += builder->makeTitle() + "\n";
        product += builder->makeAuthor();
        product += builder->makeTime() + "\n";
        product += builder->makeText() + "\n";
        product += builder->makeEnd() + "\n";
        product += "=======================\n";
        return product;
    }
private:
    std::shared_ptr<Builder> builder;
};