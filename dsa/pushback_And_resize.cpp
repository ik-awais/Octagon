#include<iostream>
using namespace std;

// Vector class
class vector {
private:
    // Dont rename these variables
    int* ptr;
    size_t cap;
    size_t len;
public:
    vector(size_t cap=0) : cap(cap), len(0) {
        ptr=(cap)? new int[cap]:nullptr;
    }
    
    // Replace yourName with your mentioned name in Issue Description:
    void pushback_kaido(int value) {
        if(len==cap) resize_kaido();
        ptr[len++]=value;
    }

    // Replace yourName with your mentioned name in Issue Description:
    void resize_kaido() {
        if(cap) cap*=2;
        else    cap++;
        int* newPtr=new int[cap];
        for(int i=0;i<len;i++) newPtr[i]=ptr[i];
        delete[] ptr;
        ptr=newPtr;
    }

    // Dont Touch Anything Else in this Vector Class.
    size_t size()const            { return len;        }
    size_t capacity()const        { return cap;        }
    int& operator[](size_t index) { return ptr[index]; }
    ~vector() { delete[] ptr; }
};

// Uncomment your respective lines in main function

// Main Function
int main() {

    // Vector Objects of size 0
    vector v1,v2,v3,v4,v5,v6,v7;

    // Initial Sizes
    cout<<"Initial Sizes (Empty Vectors) :\n";
    // cout<<"Awais    vector size: "<<v1.size()<<'\n';
    cout<<"Kaido    vector size: "<<v2.size()<<'\n';
    // cout<<"Talha    vector size: "<<v3.size()<<'\n';
    // cout<<"Velanora vector size: "<<v4.size()<<'\n';
    // cout<<"Waleeja  vector size: "<<v5.size()<<'\n';
    // cout<<"Easha    vector size: "<<v6.size()<<'\n';
    // cout<<"Areeba   vector size: "<<v7.size()<<'\n';

    // Calling pushbacks
    cout<<"\nPushing Values ...\n";
    // v1.pushback_awais    (250011);
    v2.pushback_kaido    (253015);
    // v3.pushback_talha    (250027);
    // v4.pushback_velanora (250014);
    // v5.pushback_waleeja  (250005);
    // v6.pushback_easha    (250064);
    // v7.pushback_areeba   (250056);

    // Resized After push backs
    cout<<"\nSize Increased :\n";
    // cout<<"Awais    vector size: "<<v1.size()<<'\n';
    cout<<"Kaido    vector size: "<<v2.size()<<'\n';
    // cout<<"Talha    vector size: "<<v3.size()<<'\n';
    // cout<<"Velanora vector size: "<<v4.size()<<'\n';
    // cout<<"Waleeja  vector size: "<<v5.size()<<'\n';
    // cout<<"Easha    vector size: "<<v6.size()<<'\n';
    // cout<<"Areeba   vector size: "<<v7.size()<<'\n';

    // Printing Values;
    cout<<"\nPrinting Values :\n";
    // cout<<"Awais    : "<<v1[0]<<'\n';
    cout<<"Kaido    : "<<v2[0]<<'\n';
    // cout<<"Talha    : "<<v3[0]<<'\n';
    // cout<<"velanora : "<<v4[0]<<'\n';
    // cout<<"waleeja  : "<<v5[0]<<'\n';
    // cout<<"easha    : "<<v6[0]<<'\n';
    // cout<<"areeba   : "<<v7[0]<<'\n';

    return 0;
}