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

ListNode* ikawais_makeList(const vector<int>& vals) {
    ListNode *ikawais = new ListNode;
    ListNode *temp = ikawais;
    for(int i = 0; i < vals.size(); i++)
    {
        temp->next = new ListNode(vals[i]);
        temp = temp->next;
    }
    return ikawais->next;
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

void ikawais_printList(ListNode* head) {
    if(!head) { cout << "List is Empty!\n"; return;}
    cout << "Awais -> ";
    while(head) { cout << head->val << " -> "; head = head->next; }
    cout << "NULL\n";
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

void ikawais_pushfront(ListNode*& head, int val) {
    if(!head) { head = new ListNode(val); return; } 
    ListNode *temp = new ListNode(val);
    temp->next = head;
    head = temp;
    cout << "Pushed at front successfully!\n";
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

void ikawais_popfront(ListNode*& head) {
    if(!head) { cout << "List is Empty!\n"; return;}
    ListNode *target = head;
    head = head->next;
    cout << target->val << " is popped!\n"; 
    delete target;
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

void ikawais_deleteList(ListNode*& head) {
    if(!head) { cout << "List is Empty!\n"; return;}
    ListNode *target;
    while(head)
    {
        target = head;
        head = head->next;
        delete target;
    }
    cout << "List Deleted!\n";
    head = nullptr;
}

// Main Function
// Just call your functions on the designated lines
int main() {

    // Make List Function Calls
    ListNode* Talha_head = Talha_Zahoor_makeList({1,2,3,4,5});
    ListNode *ikawais;
    vector<int> input = {2,4,6,8};

    ikawais = ikawais_makeList(input);

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);

    // Push Front Function Calls
    Talha_Zahoor_pushfront(Talha_head, 10);
    ikawais_pushfront(ikawais, 1);

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);

    // Pop Front Function Calls
    Talha_Zahoor_popfront(Talha_head);
    ikawais_popfront(ikawais);

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);

    // Delete List Function Calls
    Talha_Zahoor_deleteList(Talha_head);
    ikawais_deleteList(ikawais);

    // Print List Function Calls
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);

    return 0;
}


