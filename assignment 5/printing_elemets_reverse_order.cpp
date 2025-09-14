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
void display_rec(Node *a){
    if(a==NULL){
        return;
    }
    
    display_rec(a->next);
    cout<<a->val<<endl;
}
int main(){
    Node *a=new Node(10);
    Node *b=new Node(20);
    Node *c=new Node(30);
    Node *d=new Node(40);

    a->next=b;
    b->next=c;
    c->next=d;

    display_rec(a);
    

}