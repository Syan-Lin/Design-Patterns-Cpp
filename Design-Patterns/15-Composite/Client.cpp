#include <memory>
#include "Composite.h"

using namespace std;

int main(){
    Directory dir1("root");

    shared_ptr<Component> file1(new File("test.exe", 200));
    shared_ptr<Component> file2(new File("hello.txt", 128));
    dir1.add(file1);
    dir1.add(file2);

    shared_ptr<Component> dir2(new Directory("myinfo"));
    shared_ptr<Component> file3(new File("introduction.docx", 1286));
    shared_ptr<Component> file4(new File("myinfomation.json", 768));
    dir2->add(file3);
    dir2->add(file4);
    dir1.add(dir2);

    shared_ptr<Component> dir3(new Directory("photos"));
    shared_ptr<Component> file5(new File("myphoto.png", 6472));
    dir3->add(file5);
    dir2->add(dir3);

    shared_ptr<Component> file6(new File("sys.ini", 129));
    dir1.add(file6);

    dir1.print();

    return 0;
}
