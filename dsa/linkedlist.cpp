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
// pushback Function
void kaido_pushback(ListNode*& head, string s) {
    ListNode* newNode=new ListNode(s);
    if(!head) { head=newNode; return; }
    ListNode* temp=head;
    while(temp->next) temp=temp->next;
    temp->next=newNode;
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
    kaido_pushback(head,"Kaido");

    // Print list
    printList(head);

    // Delete list
    deleteList(head);

    return 0;
}