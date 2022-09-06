#pragma once

#include "Encryption.h"
#include <memory>

class EncryptionTool{
public:
    EncryptionTool(std::string ori){
        rsa = std::make_unique<RSA>(ori);
        des = std::make_unique<DES>(ori);
    }
    void encrypt(std::string type){
        if(type == "RSA"){
            rsa->print();
        }else if(type == "DES"){
            des->print();
        }else{
            throw;
        }
    }
private:
    std::unique_ptr<RSA> rsa;
    std::unique_ptr<DES> des;
};
