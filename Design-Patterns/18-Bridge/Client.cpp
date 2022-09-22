#include <memory>
#include "Display.h"

using namespace std;

int main(){
    Display *dis1 = new Display(make_shared<PrintStyleOne>());
    Display *dis2 = new Display(make_shared<PrintStyleTwo>());
    Display *dis3 = new DisplayRepeat(make_shared<PrintStyleTwo>());
    dis1->displayInfo("Hello World! Verision one.");
    dis2->displayInfo("Hello World! Verision two.");
    dis3->displayInfo("Hello World! Verision one.");
    ((DisplayRepeat*)dis3)->displayInfoRepeat("Hello World! Expanded ver.", 3);

    return 0;
}
