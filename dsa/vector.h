/*
This is a header file so dont write a main function.
Just create another main.cpp for testing your vector
class and include this header file in your main.cpp
by using following include preprocessor directive:

#include"vector.h"

Note: You must use " " instead of < > because this is
a user-defined header file. And also main.cpp must be
in the same folder as this file for it to work. When
you are done testing, delete your main.cpp before you
push your vector.h to github.
*/

// Replace "yourName" with your own name

class vector_kaido {
private:
    int *ptr;
    int cap;
    int len;
public:
    vector_kaido(int cap=1): cap(cap), len(0) {
        ptr=new int[cap];
    }
    vector_kaido(const vector_kaido& other): cap(other.cap), len(other.len) {
        ptr=new int[cap];
        for(int i=0;i<len;i++) ptr[i]=other.ptr[i];
    }

    void push_back(int val) {
        if(len==cap) resize();
        ptr[len++]=val;
    }
    void resize() {
        cap=(cap)?cap*2:1;
        int *newPtr=new int[cap];
        for(int i=0;i<len;i++) newPtr[i]=ptr[i];
        delete[] ptr;
        ptr=newPtr;
    }
    void pop_back() { if(len) len--; }
    int back()const {
        if(!len) throw std::runtime_error("Vector is empty!");
        return ptr[len-1];
    }
    int* begin()const { return ptr;     }
    int* end()const   { return ptr+len; }
    int& operator[](int index) {
        if(index<0 || index>=len) throw std::runtime_error("Invalid Index!");
        return ptr[index];
    }
    int size()const { return len; }
    int capacity()const { return cap; }
    bool empty()const { return !len; }

    ~vector_kaido() { delete[] ptr; }
};