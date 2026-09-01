#include<iostream>
#include<vector>
#include<new>
using namespace std;

// ListNode Definition
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val=0) : val(val), next(nullptr) {}
};

// Make List Functions
ListNode* kaido_makeList(const vector<int>& vals) {
    ListNode dummy;
    ListNode* tail=&dummy;
    for(int i:vals) {
        tail->next=new ListNode(i);
        tail=tail->next;
    }
    return dummy.next;
}

// Print List Functions
void kaido_printList(ListNode* head) {
    cout<<"Kaido List: ";
    while(head) {
        cout<<head->val<<" -> ";
        head=head->next;
    }
    cout<<"NULL\n";
}

// Push Front Functions
void kaido_pushfront(ListNode*& head, int val) {
    ListNode* newNode=new (nothrow) ListNode(val);
    if(!newNode) { cout<<"Memory Allocation Failed!\n"; return;}
    newNode->next=head;
    head=newNode;
}

// Pop Front Functions
void kaido_popfront(ListNode*& head) {
    if(!head) { cout<<"Empty List!\n"; return; }
    ListNode* target=head;
    head=head->next;
    delete target;
}

// Delete List Functions
void kaido_deleteList(ListNode*& head) {
    while(head) kaido_popfront(head);
}

// Main Function
// Just call your functions on the designated lines
int main() {

    // Make List Function Calls
    ListNode* kaido_head=kaido_makeList({11,12,13,14,15});

    // Print List Function Calls
    kaido_printList(kaido_head);

    // Push Front Function Calls
    kaido_pushfront(kaido_head, 10);

    // Print List Function Calls
    kaido_printList(kaido_head);

    // Pop Front Function Calls
    kaido_popfront(kaido_head);

    // Print List Function Calls
    kaido_printList(kaido_head);

    // Delete List Function Calls
    kaido_deleteList(kaido_head);

    // Print List Function Calls
    kaido_printList(kaido_head);

    return 0;
}