#include <memory>
#include "Command.h"

using namespace std;

int main(){
    auto receiver = make_shared<Receiver>();
    auto command_1 = make_shared<ConcreteCommandOne>(receiver);
    auto command_2 = make_shared<ConcreteCommandTwo>(receiver);
    Invoker invoker;
    invoker.addCommand(command_1);
    invoker.addCommand(command_2);
    invoker.execute();

    return 0;
}
