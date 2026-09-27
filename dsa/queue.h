#include<stdexcept>

// Queue Class
class yourName_queue {
    // Node Struct
    struct Node {
        int val;
        Node* next;
        Node(int _val): val(_val), next(nullptr) {}
    };
    Node* head; // Points to front Node
    Node* tail; // Points to back Node
    size_t len; // Current size of queue
public:
    // Constructor
    yourName_queue() {

    }

    // Queue methods
    void push(int val) {

    }
    int pop() {
        
    }
    int front() const {

    }
    int size() const {

    }
    bool empty() const {

    }
    void clear() {
        
    }

    // Destructor
    ~yourName_queue() {

    }
};