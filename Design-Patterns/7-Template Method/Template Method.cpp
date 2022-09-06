#include "Encryption.h"
#include <iostream>

using namespace std;

int main(){
    RSA rsa("Hello World!");
    DES des("Another Hello World!");

    rsa.print();
    des.print();

    return 0;
}
