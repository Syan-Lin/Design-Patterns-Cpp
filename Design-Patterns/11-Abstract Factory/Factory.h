#pragma once

#include <iostream>
#include <memory>
#include "Product.h"

class AbstractFactory{
public:
    virtual std::shared_ptr<User> createUserQuery() = 0;
    virtual std::shared_ptr<Password> createPasswordQuery() = 0;
};

class SqlFactory : public AbstractFactory{
public:
    std::shared_ptr<User> createUserQuery() override {
        return std::make_shared<SqlUserQuery>();
    }
    std::shared_ptr<Password> createPasswordQuery() override {
        return std::make_shared<SqlPasswordQuery>();
    }
};

class OracleFactory : public AbstractFactory{
public:
    std::shared_ptr<User> createUserQuery() override {
        return std::make_shared<OracleUserQuery>();
    }
    std::shared_ptr<Password> createPasswordQuery() override {
        return std::make_shared<OraclePasswordQuery>();
    }
};
