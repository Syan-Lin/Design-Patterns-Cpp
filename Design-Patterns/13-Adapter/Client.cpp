#include <memory>
#include "TextProcessor.h"

using namespace std;

int main(){
    string number1 = "123", number2 = "456";
    unique_ptr<TextProcess> tp(new TextProcessor());
    string add = tp->add(number1, number2);
    string sub = tp->sub(number1, number2);
    cout << number1 << " + " << number2 << " = " << add << endl;
    cout << number1 << " - " << number2 << " = " << sub << endl;

    return 0;
}
