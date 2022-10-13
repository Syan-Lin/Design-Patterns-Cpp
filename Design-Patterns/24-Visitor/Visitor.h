#pragma once

#include <iostream>
#include <vector>

class Visitor;

class Element{
public:
    virtual void accept(Visitor*) = 0;
};

class StringElement: public Element{
public:
    StringElement(std::string value) : m_value(value) {}
    void accept(Visitor*) override;
    std::string m_value;
};

class IntegerElement: public Element{
public:
    IntegerElement(int value) : m_value(value) {}
    void accept(Visitor* visitor) override;
    int m_value;
};

class Container{
public:
    void addElement(Element* ele){
        m_elements.push_back(ele);
    }
    void accept(Visitor* visitor);
private:
    std::vector<Element*> m_elements;
};

class Visitor{
public:
    virtual void visitStringElement(Element*) = 0;
    virtual void visitIntegerElement(Element*) = 0;
};

class StringVisitor : public Visitor{
public:
    void visitStringElement(Element*) override;
    void visitIntegerElement(Element*) override {}
};

class IntegerVisitor : public Visitor{
public:
    void visitStringElement(Element*) override {}
    void visitIntegerElement(Element* ele) override;
};

void StringElement::accept(Visitor* visitor){
    visitor->visitStringElement(this);
}
void IntegerElement::accept(Visitor* visitor) {
    visitor->visitIntegerElement(this);
}
void Container::accept(Visitor* visitor){
    for(auto ele : m_elements){
        ele->accept(visitor);
    }
}
void StringVisitor::visitStringElement(Element* ele) {
    std::cout << static_cast<StringElement&>(*ele).m_value << std::endl;
}
void IntegerVisitor::visitIntegerElement(Element* ele) {
    std::cout << static_cast<IntegerElement&>(*ele).m_value << std::endl;
}