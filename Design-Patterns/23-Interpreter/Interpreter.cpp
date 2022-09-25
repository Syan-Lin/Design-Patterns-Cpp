#include "Interpreter.h"

static std::string nextToken(std::string str, int& begin){
    std::string result;
    bool isPreBlank = true;
    for(; begin < str.size(); begin++){
        if(str[begin] == ' '){
            if(!isPreBlank){
                break;
            }
            continue;
        }else{
            isPreBlank = false;
            result += str[begin];
        }
    }
    return result;
}

void PrimitiveCommandNode::parse(std::string& str, int& begin){
    std::string token = nextToken(str, begin);
    if(token == "go"){
        std::cout << "go forward" << std::endl;
    }else if(token == "right"){
        std::cout << "turn right" << std::endl;
    }else if(token == "left"){
        std::cout << "turn left" << std::endl;
    }else{
        std::cout << "unknown command" << std::endl;
    }
}

void RepeatCommandNode::parse(std::string& str, int& begin){
    std::string number = nextToken(str, begin);
    int num = std::stoi(number);
    int temp = begin;
    for(int i = 0; i < num; i++){
        begin = temp;
        CommandListNode cln;
        cln.parse(str, begin);
    }
}

void CommandNode::parse(std::string& str, int& begin){
    std::string token = nextToken(str, begin);
    if(token == "repeat"){
        RepeatCommandNode rcn;
        rcn.parse(str, begin);
    }else{
        begin -= token.size();
        PrimitiveCommandNode pcn;
        pcn.parse(str, begin);
    }
}

void CommandListNode::parse(std::string& str, int& begin){
    while(true){
        std::string token = nextToken(str, begin);
        if(token == ""){
            std::cout << "Missing end" << std::endl;
            return;
        }else if(token == "end"){
            break;
        }else{
            begin -= token.size();
            CommandNode cn;
            cn.parse(str, begin);
        }
    }
}

void ProgramNode::parse(std::string& str, int& begin){
    std::string token = nextToken(str, begin);
    if(token == "program"){
        std::cout << "Program start" << std::endl;
    }else{
        std::cout << "Missing program" << std::endl;
        return;
    }
    CommandListNode cln;
    cln.parse(str, begin);
}
