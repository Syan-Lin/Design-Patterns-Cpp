#include "EncryptionTool.h"
#include <iostream>

using namespace std;

int main(){
    EncryptionTool et("Hello World!");
    et.encrypt("RSA");
    et.encrypt("DES");

    return 0;
}
