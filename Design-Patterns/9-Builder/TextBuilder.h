#pragma once

#include <iostream>

class Builder{
public:
    virtual std::string makeTitle() = 0;
    virtual std::string makeAuthor() = 0;
    virtual std::string makeTime() = 0;
    virtual std::string makeText() = 0;
    virtual std::string makeEnd() = 0;
    void setTitle(std::string title){
        this->title = title;
    }
    void setAuthor(std::string author){
        this->author = author;
    }
    void setTime(std::string time){
        this->time = time;
    }
    void setText(std::string text){
        this->text = text;
    }
    void setEnd(std::string end){
        this->end = end;
    }
protected:
    std::string title;
    std::string author;
    std::string time;
    std::string text;
    std::string end;
};

class NormalText : public Builder{
public:
    std::string makeTitle() override {
        return "# " + title;
    }
    std::string makeAuthor() override {
        return "By " + author + " ";
    }
    std::string makeTime() override {
        return "At " + time;
    }
    std::string makeText() override {
        return text;
    }
    std::string makeEnd() override {
        return "End: " + end;
    }
};

class FancyText : public Builder{
public:
    std::string makeTitle() override {
        return "####<" + title + ">####";
    }
    std::string makeAuthor() override {
        return "By <" + author + ">, ";
    }
    std::string makeTime() override {
        return "At <" + time + ">";
    }
    std::string makeText() override {
        return text;
    }
    std::string makeEnd() override {
        return ":) " + end;
    }
};
