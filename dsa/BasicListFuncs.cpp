#include<iostream>
#include<vector>
using namespace std;

// ListNode Definition
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val=0) : val(val), next(nullptr) {}
};

// Make List Functions
ListNode* Talha_Zahoor_makeList(const vector<int>& vals) {
    // Your Code Here
    ListNode alpha;
    ListNode * temp = &alpha;
    for(int i=0; i < vals.size(); i++ ){
        temp->next = new ListNode(vals[i]);
        temp = temp->next;
    }
    return alpha.next;
}

// Print List Functions
void Talha_Zahoor_printList(ListNode* head) {
    // Your Code Here
    cout<<"Talha List: ";
    while(head){
        cout<<head->val<<" ->";
        head = head->next;
    }
    cout<<"Null"<<endl;
}

// Push Front Functions
void Talha_Zahoor_pushfront(ListNode*& head, int val) {
    ListNode * node =new ListNode(val);
    if(head == nullptr){
        head = node;
        return;
    }
    else{
        ListNode * temp = head;
        head = node;
        head->next = temp;
    }
    return;

}

// Pop Front Functions
void Talha_Zahoor_popfront(ListNode*& head) {
    // Your Code Here
    if(head == nullptr)
    throw runtime_error("List is Empty!");
    ListNode * temp = head;
    head = temp->next;
    delete temp;
}

// Delete List Functions
void Talha_Zahoor_deleteList(ListNode*& head) {
    if(head == nullptr) return;
    while(head){
        ListNode * temp = head;
      head = head->next;
      delete temp;
    }
}

// Main Function
// Just call your functions on the designated lines
int main() {

    // Make List Function Calls
    ListNode* Talha_head = Talha_Zahoor_makeList({1,2,3,4,5});

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);

    // Push Front Function Calls
    Talha_Zahoor_pushfront(Talha_head, 10);

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);
    // Replace this line with your printList function call

    // Pop Front Function Calls
    Talha_Zahoor_popfront(Talha_head);
    // Replace this line with your popfront function call

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);
    // Replace this line with your printList function call

    // Delete List Function Calls
    Talha_Zahoor_deleteList(Talha_head);
    // Replace this line with your deleteList function call

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);

    return 0;
}