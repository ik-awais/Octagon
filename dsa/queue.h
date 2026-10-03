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
    Node* head; // Points to front Node
    Node* tail; // Points to back Node
    size_t len; // Current size of queue
    // Deep Copy Method
    void copy(const kaido_queue& other) {
        Node* curr=other.head;
        while(curr) {
            push(curr->val);
            curr=curr->next;
        }
    }
public:
    // Constructor
    kaido_queue(): head(nullptr), tail(nullptr), len(0) {}
    // Copy Constructor
    kaido_queue(const kaido_queue& other): head(nullptr), tail(nullptr), len(0) {
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
        if(!head) head=tail=new Node(val);
        else {
            tail->next=new Node(val);
            tail=tail->next;
        }
        len++;
    }
    T pop() {
        if(empty()) throw std::underflow_error("Queue is empty!");
        Node* target=head;
        if(head==tail) head=tail=nullptr;
        else head=head->next;
        T poppedVal=target->val;
        delete target;
        len--;
        return poppedVal;
    }
    T front() const {
        if(empty()) throw std::underflow_error("Queue is empty!");
        return head->val;
    }
    size_t size() const { return len; }
    bool empty() const { return !len; }
    void clear() { while(head) pop(); }

    // Destructor
    ~kaido_queue() { clear(); }
};