#include "Observer.h"
#include "Subject.h"
#include <memory>

using namespace std;

int main(){
    shared_ptr<Observer> no = make_shared<NumberObserver>()
                        , so = make_shared<StringObserver>();
    MySubject sub(10, "abc");
    sub.addObserver(no);
    sub.addObserver(so);

    sub.setString("ABC");
    sub.setNumber(15);

    return 0;
}
