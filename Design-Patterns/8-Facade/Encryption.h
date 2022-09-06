#pragma once

#include <iostream>

class Encryption{
public:
    Encryption(std::string ori) : original(ori) {}
    void print(){
        using namespace std;
        cout << "==========加密算法==========" << endl;
        cout << "原文: <" << original << ">" << endl;
        cout << "加密算法: <" << name() << ">" << endl;
        cout << "其他加密细节..." << endl;
        cout << "密文: <" << encryption() << ">" << endl;
        cout << "解密操作..." << endl;
        cout << "解密: <" << decryption() << ">" << endl;
        cout << "============================" << endl;
    }
protected:
    std::string original;
    std::string encrypted;
private:
    virtual std::string name() = 0;
    virtual std::string& encryption() = 0;
    virtual std::string decryption() = 0;
};

class RSA : public Encryption{
public:
    RSA(std::string ori) : Encryption(ori) {}
private:
    std::string name() override {
        return "RSA";
    }
    std::string& encryption() override {
        for(auto& e : original){
            encrypted += (e + 1);
        }
        return encrypted;
    }
    std::string decryption() override {
        std::string result;
        for(auto& e : encrypted){
            result += (e - 1);
        }
        return result;
    }
};

class DES : public Encryption{
public:
    DES(std::string ori) : Encryption(ori) {}
private:
    std::string name() override {
        return "DES";
    }
    std::string& encryption() override {
        for(auto& e : original){
            encrypted += (e - 4);
        }
        return encrypted;
    }
    std::string decryption() override {
        std::string result;
        for(auto& e : encrypted){
            result += (e + 4);
        }
        return result;
    }
};
