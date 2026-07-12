#include<iostream>
#include<string>
using namespace std;

// Struct Node Definition
struct Node {
    string val;
    Node* next;
    Node(string val="",Node* next=nullptr) {
        this->val=val;
        this->next=next;
    }
};

// Print list Function
void printList(Node* head) {
    while(head) {
        cout<<head->val<<" -> ";
        head=head->next;
    }
    cout<<"NULL\n";
}

// Do Not Make Any Changes in main (Other than Designated Region)
// Main Function
int main() {
    // First Node (Head)
    Node head("First Node");

    // Your Code Here

    // Print list
    printList(&head);

    return 0;
}