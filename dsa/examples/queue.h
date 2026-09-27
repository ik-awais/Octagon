#include<stdexcept>

/*
This is a header file for queue class. All the required headers are already
included so don't include any header files. Don't write a main function here.
To test you queue.h, you can create a separate main.cpp and include your file like:

#include"queue.h"

Make sure that your main.cpp is in the same folder as your queue.h file.
Then write a main function in your main.cpp to test you queue's methods.

Notes:
1) Queue is basically opposite of a stack. In a stack, the rule is actually
LIFO (Last In First Out). In a queue, the rule is FIFO (First In First Out).
2) A Queue has following properties so while implementing your queue class,
make sure it follows these properties:

1) Insertion happens at back.
2) Deletion happens at front.
3) Indexing in not allowed in queue.
4) Only front value is accessible.
5) All operations of queue are O(1) in time.
6) Throw errors using stdexcept where neccessary.

Explanation:
O(1) in time means that the speed of your queue's functions does not
change as the size of queue grows. If queue is of size 1 or size 100,
speed of push(), pop(), front(), size() and empty() remains constant.

Note:
Replace "yourName" with your actual Name.
*/

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