#include "Visitor.h"

using namespace std;

int main(){
    Container ct;
    ct.addElement(new StringElement("Hello"));
    ct.addElement(new IntegerElement(10));
    ct.addElement(new StringElement("Goodbye"));
    ct.addElement(new IntegerElement(20));

    ct.accept(new StringVisitor());
    ct.accept(new IntegerVisitor());

    return 0;
}
