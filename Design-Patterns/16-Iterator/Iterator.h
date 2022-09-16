#pragma once

#include <iostream>
#include <vector>
#include <memory>

class ArrayInt;

class Iterator{
public:
    virtual bool hasNext() = 0;
    virtual int& next() = 0;
};

class ArrayIterator : public Iterator{
public:
    ArrayIterator(ArrayInt& arr) : arr_(arr), current_(0){}
    bool hasNext() override;
    int& next() override;
private:
    int current_;
    ArrayInt& arr_;
};

class Aggregate{
public:
    virtual std::shared_ptr<Iterator> iterator() = 0;
};

class ArrayInt : public Aggregate{
public:
    ArrayInt(int size) : arr_(new int[size]), size_(size){
        for(int i = 0; i < size_; i++){
            arr_[i] = i;
        }
    }
    int& operator[](int index){
        return arr_[index];
    }
    std::shared_ptr<Iterator> iterator(){
        return std::make_shared<ArrayIterator>(*this);
    }
    int size(){
        return size_;
    }
    ~ArrayInt(){
        delete[] arr_;
    }
private:
    int size_;
    int* arr_;
};

bool ArrayIterator::hasNext(){
    return current_ < arr_.size();
}
int& ArrayIterator::next(){
    return arr_[current_++];
}
