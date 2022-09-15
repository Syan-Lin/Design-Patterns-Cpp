#include <memory>
#include "State.h"
#include "Connection.h"

using namespace std;

int main(){
    Connection connection;
    connection.setIp("192.168.1.1");
    connection.listen();
    connection.send();
    connection.close();

    connection.listen();
    connection.close();

    return 0;
}
