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

void waleeja_pushback(ListNode*& head, string s){
    ListNode* new_node = new ListNode(s);
    if(head == nullptr){
       head = new_node;
    }

    else{
        ListNode* temp = head;
        while(temp->next != nullptr){
            temp = temp->next;
        }
        temp->next = new_node;
    }
}

void ikawais_pushback(ListNode*& head, string s){
    ListNode* newNode = new ListNode(s); 
    /* newNode not only gets new address of size 's' 
    but the new address is also initialized with 
    value of 's' */
    if(!head){head = newNode; return;}
    ListNode* temp = head;
    while(temp->next){temp = temp->next;}
    temp->next = newNode;
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
    waleeja_pushback(head, "Waleeja");
    ikawais_pushback(head, "Muhammad Awais");
    // Print list
    printList(head);

    // Delete list
    deleteList(head);

    return 0;
}