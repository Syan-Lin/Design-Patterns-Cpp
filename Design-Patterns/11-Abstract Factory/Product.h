#pragma once

#include <iostream>

class User{
public:
    virtual std::string getData() = 0;
    virtual void insert(std::string) = 0;
};

class SqlUserQuery : public User{
public:
    std::string getData() override {
        return "从 Sql 获取一条 User 记录";
    }
    void insert(std::string str) override {
        std::cout << "向 Sql 插入记录: " << str << std::endl;
    }
};

class OracleUserQuery : public User{
public:
    std::string getData() override {
        return "从 Oracle 获取一条 User 记录";
    }
    void insert(std::string str) override {
        std::cout << "向 Oracle 插入记录: " << str << std::endl;
    }
};

class Password{
public:
    virtual std::string getData() = 0;
    virtual void insert(std::string) = 0;
};

class SqlPasswordQuery : public Password{
public:
    std::string getData() override {
        return "从 Sql 获取一条 Password 记录";
    }
    void insert(std::string str) override {
        std::cout << "向 Sql 插入记录: " << str << std::endl;
    }
};

class OraclePasswordQuery : public Password{
public:
    std::string getData() override {
        return "从 Oracle 获取一条 Password 记录";
    }
    void insert(std::string str) override {
        std::cout << "向 Oracle 插入记录: " << str << std::endl;
    }
};
