#include<stdexcept>

template <typename T>
// Queue Class
class kaido_queue {
    // Node Struct
    struct Node {
        T val;
        Node* next;
        Node(T _val): val(_val), next(nullptr) {}
    };
    Node* front; // Points to front Node
    Node* rear; // Points to back Node
    size_t len; // Current size of queue
    // Deep Copy Method
    void copy(const kaido_queue& other) {
        Node* curr=other.front;
        while(curr) {
            push(curr->val);
            curr=curr->next;
        }
    }
public:
    // Constructor
    kaido_queue(): front(nullptr), rear(nullptr), len(0) {}
    // Copy Constructor
    kaido_queue(const kaido_queue& other): front(nullptr), rear(nullptr), len(0) {
        copy(other);
    }
    // = operator Overload
    kaido_queue& operator=(const kaido_queue& other) {
        if(this!=&other) {
            clear();
            copy(other);
        }
        return *this;
    }

    // Queue methods
    void push(T val) {
        if(!front) front=rear=new Node(val);
        else {
            rear->next=new Node(val);
            rear=rear->next;
        }
        len++;
    }
    T pop() {
        if(empty()) throw std::underflow_error("Queue is empty!");
        Node* target=front;
        if(front==rear) front=rear=nullptr;
        else front=front->next;
        T poppedVal=target->val;
        delete target;
        len--;
        return poppedVal;
    }
    T peek() const {
        if(empty()) throw std::underflow_error("Queue is empty!");
        return front->val;
    }
    size_t size() const { return len; }
    bool empty() const { return !len; }
    void clear() { while(front) pop(); }

    // Destructor
    ~kaido_queue() { clear(); }
};