#include<iostream>
#include<string>
using namespace std;

// Struct ListNode Definition
struct ListNode {
    string val;
    ListNode* next;
    ListNode(string val="",ListNode* next=nullptr): val(val), next(next) {}
};

// Replace yourName with your actual Name
// Add ListNode Function
void yourName_addNode(ListNode*& head, string s) {
    // Your Code Here
}

// Print list Function
void printList(ListNode* head) {
    while(head) {
        cout<<head->val<<" -> ";
        head=head->next;
    }
    cout<<"NULL\n";
}

// Memory Cleanup Function
void deleteList(ListNode*& head) {
    while(head) {
        ListNode* target=head;
        head=head->next;
        delete target;
    }
}

// Do Not Make Any Changes in main (Other than Designated Region)
// Main Function
int main() {
    // Pointer to First ListNode (head)
    ListNode* head=nullptr;

    // Function Calls
    // Replace This Line With Your Function Call

    // Print list
    printList(head);

    // Delete list
    deleteList(head);

    return 0;
}