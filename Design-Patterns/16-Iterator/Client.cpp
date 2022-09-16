#include <memory>
#include "Iterator.h"

using namespace std;

int main(){
    ArrayInt arr(10);
    auto iter = arr.iterator();
    while(iter->hasNext()){
        cout << iter->next() << endl;
    }
    return 0;
}
