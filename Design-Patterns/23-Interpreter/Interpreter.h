#pragma once

#include <iostream>

class Node{
public:
    virtual void parse(std::string&, int&) = 0;
};

// <primitive command> ::= go | right | left
class PrimitiveCommandNode : public Node{
public:
    void parse(std::string& str, int& begin) override;
};

// <repeat command> ::= repeat <number> <command list>
class RepeatCommandNode : public Node{
public:
    void parse(std::string& str, int& begin) override;
};

// <command> ::= <repeat command> | <primitive command>
class CommandNode : public Node{
public:
    void parse(std::string& str, int& begin) override;
};

// <command list> ::= <command> * end
class CommandListNode : public Node{
public:
    void parse(std::string& str, int& begin) override;
};

// <program> ::= program <command list>
class ProgramNode : public Node{
public:
    void parse(std::string& str, int& begin) override;
};
