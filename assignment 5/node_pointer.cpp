#include<iostream>
using namespace std;
class Node{
public:
int val;
Node *next;
Node(int val){
    this->val=val;
    this->next=NULL;
}

};
int main(){
    Node* a=new Node(10);// they will store the address if the linked list
    Node* b=new Node(10);
    Node* c=new Node(10);
    Node* d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;
    Node *temp=a;
    while(temp!=NULL){
        cout<<temp->val<<endl;
        temp=temp->next;
    }
    cout<<endl;
    cout<<a->next->next->next->val;
    return 0;
    
}