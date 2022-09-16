#include <memory>
#include "Singleton.h"

using namespace std;

int main(){
    auto& single = Singleton::getInstance();
    single.function();
    auto& single2 = Singleton::getInstance();
    single2.function();

    if(&single == &single2){
        cout << "Ther are same." << endl;
    }

    return 0;
}
