#include<iostream>
#include<string>
using namespace std;

// Struct Node Definition
struct Node {
    string val;
    Node* next;
    Node(string val="",Node* next=nullptr): val(val), next(next) {}
};

// Replace yourName with your actual Name
// Add Node Function
void yourName_addNode(Node*& head, string s) {
    // Your Code Here
}

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
    // Pointer to First Node (head)
    Node* head=nullptr;

    // Call Your Function Here
    // Replace This Line With Your Function Call

    // Print list
    printList(head);

    return 0;
}