#include "Interpreter.h"

using namespace std;

int main(){
    ProgramNode parser;
    string text = "program repeat 3 repeat 2 go end right end end";
    int begin = 0;
    parser.parse(text, begin);

    return 0;
}
