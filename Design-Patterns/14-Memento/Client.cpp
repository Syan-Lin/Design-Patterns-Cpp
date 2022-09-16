#include <memory>
#include "Charactor.h"
#include "Caretaker.h"

using namespace std;

int main(){
    Charactor player;
    Caretaker administrator;
    player.setData(100, 100);
    player.print();
    cout << "\n进行存档...\n" << endl;
    administrator.setMemento(player.createMemento());
    administrator.getMemento()->print();
    cout << "\n玩家数据变化...\n" << endl;
    player.setData(50, 30);
    player.print();
    cout << "\n恢复存档...\n" << endl;
    player.setMemento(administrator.getMemento());
    player.print();

    return 0;
}
