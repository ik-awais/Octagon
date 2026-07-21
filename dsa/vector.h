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
    vector_kaido(int cap=1): cap(abs(cap)), len(0) {
        ptr=new int[this->cap];
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

class vector_waleeja {
private:
    int *ptr;
    int cap;
    int len;
public:
    vector_waleeja(int cap = 1){
        if(cap < 0) cap*=(-1);
        this -> cap = cap;
        ptr = new int [cap];
        len = 0;
    }

    vector_waleeja(const vector_waleeja &vec){
        this -> cap = vec.cap;
        this -> len = vec.len;
        ptr = new int [cap];

        for(int i=0; i<len; i++){
            ptr[i] = vec.ptr[i];
        }
    }

    void push_back(int val){
        if(len==cap) resize();
            ptr[len] = val;
            len++;
        
    }

    void resize(){
        if(cap==0) cap =1;
        else cap*=2;
        
        int *newptr = new int [cap];
        for(int i=0; i<len; i++){
            newptr[i]=ptr[i];
        }
            delete [] ptr;
            ptr = newptr;
    }

    void pop_back(){
        if(len>0)
        len--;
    }

    int back() const{
        if(len>0) return ptr[len-1];
        else{
            throw std::runtime_error("Vector is empty!");
        }
    }

    int* begin() const{
        return ptr;
    }

    int* end() const{
        return ptr+len;
    }

    int& operator[](int index){
        if(index >= 0 && index < len){
            return ptr[index];
        }
        else{
            throw std::runtime_error("Invalid Index!");
        }
    }

    int size() const{
        return len;
    }

    int capacity() const{
        return cap;
    }

    bool empty() const{
        if(len==0){
            return 1;
        }
        return 0;
    }

    ~vector_waleeja(){
        delete [] ptr;
    }
};

class vector_Talha {
private:
    int *ptr;
    int cap;
    int len;
public:

    // Your Default+Parameterized Constructor Here
        vector_Talha(int cap=1){
        if(cap<0)
            cap*=-1;
        this->cap=cap;
        ptr= new int[cap];
        len=0;
    }
    // Your Copy Constructor Here
    vector_Talha(const vector_Talha &obj){
        this->cap=obj.cap;
        this->len=obj.len;
        ptr=new int[cap];
        for(int i=0;i<len;i++) 
            ptr[i]=obj.ptr[i];
    }
    // Your push_back Here
    void push_back(int val){
        if(len==cap) resize();
       ptr[len++]=val; 
    }
    // Your resize Here
    void resize(){
        (cap)?cap*=2:cap++;
        int * newptr=new int [cap];
        for(int i=0;i<len;i++) newptr[i]=ptr[i];        
        delete [] ptr;
        ptr=newptr;
    }
    // Your pop_back Here
    void pop_back(){
        if(len) len--;
    }
    // Your back Here
    int back(){
        if(len) return ptr[len-1];
        throw std::runtime_error("Vector is empty!");
    }
    // Your begin Here
    int * begin(){
        return  ptr;
    }
    // Your end Here
    int * end(){
        return ptr+len;
    }
    // Your operator[] Here
    int & operator[](int index){
        if(index<len&&index>=0) return ptr[index];
        throw std::runtime_error("Invalid Index!");
    }
    // Your size Here
    int size(){
        return len;
    }
    // Your capacity Here
    int capacity(){
        return cap;
    }
    // Your empty Here
    bool empty(){
        return !len;
    }
    // Your Destructor Here
    ~vector_Talha(){
        delete [] ptr;
    }
};