#include<iostream>
#include<vector>
using namespace std;

// ListNode Definition
struct ListNode {
    int val;
    ListNode* next;
    ListNode(int val=0) : val(val), next(nullptr) {}
};

ListNode* kaido_makeList(const vector<int>& vals) {
    ListNode dummy;
    ListNode* tail=&dummy;
    for(int i:vals) {
        tail->next=new ListNode(i);
        tail=tail->next;
    }
    return dummy.next;
}

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
    ListNode ikawais;
    ListNode *temp = &ikawais;
    for(int i = 0; i < vals.size(); i++)
    {
        temp->next = new ListNode(vals[i]);
        temp = temp->next;
    }
    return ikawais.next;
}

ListNode* waleeja_makeList(const vector<int>& vals) {
    ListNode dummyNode;
    ListNode *temp = &dummyNode;

    for(int i=0; i<vals.size(); i++){
        temp->next = new ListNode(vals[i]);
        temp = temp->next;
    }
    return dummyNode.next;
}

ListNode* velanora_makeList(const vector<int> &vals){
    ListNode dummyNode;
    ListNode *temp = &dummyNode;
    for (int i = 0; i < vals.size(); i++){
        temp->next = new ListNode(vals[i]);
        temp = temp->next;
    }
    return dummyNode.next;
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
    cout << "Awais List: ";
    while(head) { cout << head->val << " -> "; head = head->next; }
    cout << "NULL\n";
}

void waleeja_printList(ListNode* head){

    cout << "Waleeja List: ";
    while(head){
        cout<<head->val<<" -> ";
        head = head->next;
    }
    cout<<"NULL"<<endl;
}

void velanora_printList(ListNode* head){
    ListNode *temp = head;
    cout<<"Velanora List: ";
    while(temp){
        cout<<temp->val<<" ---> ";
        temp = temp->next;
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
}

void waleeja_pushfront(ListNode*& head, int val){
    ListNode *n = new ListNode(val);
    n->next = head;
    head = n;
}
void velanora_pushfront(ListNode* &head, int val){
    ListNode * newNode = new ListNode(val);
    newNode->next =head;
    head = newNode;
}

// Pop Front Functions
void kaido_popfront(ListNode*& head) {
    if(!head) { cout<<"Empty List!\n"; return; }
    ListNode* target=head;
    head=head->next;
    delete target;
}

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
    delete target;
}

void waleeja_popfront(ListNode*& head){
    if(!head){
        cout<<"List is empty"<<endl;
        return;
    }
    ListNode *temp = head;
    head = head->next;
    delete temp;
}

void velanora_popfront(ListNode* &head){
    if(!head){throw runtime_error("List is Empty!"); return;}
    ListNode *rm = head;
    head = head->next;
    delete rm;
}

// Delete List Functions
void kaido_deleteList(ListNode*& head) {
    while(head) kaido_popfront(head);
}

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
    head = nullptr;
}

void waleeja_deleteList(ListNode*& head){
    if(!head){
        cout<<"List is empty"<<endl;
        return;
    }

    while(head){
       waleeja_popfront(head);
    }
}

void velanora_deleteList(ListNode* &head){
    while(head){velanora_popfront(head);}
}

// Main Function
// Just call your functions on the designated lines
int main() {

    // Make List Function Calls
    ListNode* kaido_head=kaido_makeList({11,12,13,14,15});
    ListNode* Talha_head = Talha_Zahoor_makeList({1,2,3,4,5});
    ListNode *ikawais = ikawais_makeList({2,4,6,8});
    ListNode *waleeja_head = waleeja_makeList({9,8,7,6,5});
    ListNode *velanora_head = velanora_makeList({10,20,30,40,50});

    // Print List Function Calls
    kaido_printList(kaido_head);
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);
    waleeja_printList(waleeja_head);
    velanora_printList(velanora_head);

    // Push Front Function Calls
    kaido_pushfront(kaido_head, 10);
    Talha_Zahoor_pushfront(Talha_head, 10);
    ikawais_pushfront(ikawais, 1);
    waleeja_pushfront(waleeja_head, 3);
    velanora_pushfront(velanora_head, 0);

    // Print List Function Calls
    kaido_printList(kaido_head);
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);
    waleeja_printList(waleeja_head);
    velanora_printList(velanora_head);

    // Pop Front Function Calls
    kaido_popfront(kaido_head);
    Talha_Zahoor_popfront(Talha_head);
    ikawais_popfront(ikawais);
    waleeja_popfront(waleeja_head);
    velanora_popfront(velanora_head);

    // Print List Function Calls
    kaido_printList(kaido_head);
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);
    waleeja_printList(waleeja_head);
    velanora_printList(velanora_head);

    // Delete List Function Calls
    kaido_deleteList(kaido_head);
    Talha_Zahoor_deleteList(Talha_head);
    ikawais_deleteList(ikawais);
    waleeja_deleteList(waleeja_head);
    velanora_deleteList(velanora_head);

    // Print List Function Calls
    kaido_printList(kaido_head);
    Talha_Zahoor_printList(Talha_head);
    ikawais_printList(ikawais);
    waleeja_printList(waleeja_head);
    velanora_printList(velanora_head);

    return 0;
}
