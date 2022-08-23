#pragma once

#include <memory>
#include <iostream>

class Cloneable{
public:
    virtual std::shared_ptr<Cloneable> clone() = 0;
};

class PersonalInfo: public Cloneable{
public:
    PersonalInfo() = delete;
    PersonalInfo(std::string sex, std::string name, int age): sex(sex), name(name), age(age){}

    std::shared_ptr<Cloneable> clone() override{
        return std::make_shared<PersonalInfo>(sex, name, age);
    }

    void setPersonalInfo(std::string sex, std::string name, int age){
       this->sex = sex;
       this->name = name;
       this->age = age;
    }
    void print(){
        std::cout << "性别：" << sex << std::endl;
        std::cout << "名字：" << name << std::endl;
        std::cout << "年龄：" << age << std::endl;
    }
private:
    std::string sex;
    std::string name;
    int age;
};

class Resume: public Cloneable{
public:
    void setPersonalInfo(std::string sex, std::string name, int age){
        if(personalInfo == nullptr){
            personalInfo = std::make_shared<PersonalInfo>(sex, name, age);
        }else{
            personalInfo->setPersonalInfo(sex, name, age);
        }
    }
    void setPersonalInfo(std::shared_ptr<PersonalInfo> psinfo){
        personalInfo = psinfo;
    }
    void setInfo(std::string school, std::string language){
        this->school = school;
        this->language = language;
    }
    void print(){
        std::cout << "======简历======" << std::endl;
        personalInfo->print();
        std::cout << "毕业院校：" << school << std::endl;
        std::cout << "擅长语言：" << language << std::endl;
        std::cout << "================" << std::endl;
    }

    std::shared_ptr<Cloneable> clone() override{
        auto clone = std::make_shared<Resume>();
        auto info = personalInfo->clone();
        clone->setPersonalInfo(std::dynamic_pointer_cast<PersonalInfo>(info));
        clone->setInfo(school, language);
        return clone;
    }
private:
    std::shared_ptr<PersonalInfo> personalInfo;
    std::string school;
    std::string language;
};
