#include <memory>
#include "Flyweight.h"

using namespace std;

int main(){
    FlyweightFactory ff;
    cout << ff.getChar(0) << endl;
    cout << ff.getChar(1) << endl;
    cout << ff.getChar(2) << endl;
    cout << ff.getChar(0) << endl;
    cout << ff.getChar(1) << endl;
    cout << ff.getChar(2) << endl;

    return 0;
}
