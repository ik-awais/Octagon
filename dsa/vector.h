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
class vector_areeba
{
    private: 
       int *ptr;
       int cap;
       int len;
    public:

       vector_areeba(int cap = 1)
       {
        if(cap < 0)
        {
            cap = -1 * cap;
        }
           this->cap = cap;
        len = 0;
        ptr = new int [cap];
       }

       vector_areeba(const vector_areeba& c)  
        {
           cap = c.cap;
           len = c.len;

           ptr = new int [cap];
           for (int i = 0 ; i < len; i++)
           {
             ptr[i] = c.ptr[i];
           }
        }
        
        void push_back(int val)
        {
            if (cap == len)resize();
                ptr[len++] = val;
        }
        
        void resize()
        {
           if (cap == 0)
           {
               cap++;
           }else
           {
              cap = cap * 2; 
           }
           int *newptr = new int [cap];
           for(int i = 0; i< len; i++)
           {
            newptr[i] = ptr[i];
           }

           delete [] ptr;
           ptr = newptr;
        }
       
        void pop_back()
        {
            if (len != 0)
            {
                len--;
            }
        }

        int back()const
        {
            if(len == 0)
            {
                throw std::runtime_error("Vector is empty!");
            }
            
            return ptr[len -1];
        }

        int *begin()const 
        {
             return ptr;
        }

         int *end()const
        {
            return ptr +len;
        }

        int& operator[](int index)
        {
            if(index >= 0 && index < len)
            {
                return ptr[index];
            }else
            {
                throw std::runtime_error("Invalid Index!");
            }
        }

        int size()const
        {
            return len;
        }

        int capacity()const
        {
            return cap;
        }

        bool empty()const
        {
           if(len == 0)
           {
            return 1;
           }
           else 
           {
            return 0;
           }
        }

        ~vector_areeba()
        {
            delete []ptr;
        }
};

class vector_velanora {
private:
    int *ptr;
    int cap;
    int len;
public:
    vector_velanora(int cap = 1) : len(0)
    {
        if(cap<0) cap = abs(cap);
        this->cap = cap;
        ptr = new int[cap];
    }
    
    vector_velanora(const vector_velanora &V)
    {
        cap = V.cap;
        len = V.len;
        ptr = new int[cap];
        for (int i = 0; i < len; i++)
            ptr[i] = V.ptr[i];
    }

    void push_back(int val)
    {
        if(len == cap) resize();
        ptr[len] = val;
        len++; 
    }
   
    void resize()
    {
        if(cap==0) cap++;
        else cap *= 2;
        int *temp = new int[cap];
        for (int i = 0; i < len; i++)
            temp[i]= ptr[i];
        delete[] ptr;
        ptr = temp;
    }

    void pop_back() {  if(len>0) len--; }
    
    int back() const
    {
        if(!len) throw std::runtime_error("Vector is empty!");
        return ptr[len-1];
    }

    int* begin() const{ return ptr;}
    int* end() const {  return ptr+len; }

    int & operator [](int index)
    {
        if(index>=0 && index<len) return ptr[index];
        else throw std::runtime_error("Invalid Index!");
    }
    
    int size() const{ return len; }
    int capacity() const { return cap; }

    bool empty() const
    {
        if(len) return false; 
        return true;
    }

    ~vector_velanora() { delete[] ptr; }
};

