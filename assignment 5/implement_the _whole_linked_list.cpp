#include<iostream>
using namespace std;
class Node{
public:
int val;
Node* next;
Node(int val){
    this->val=val;
    this->next=NULL;
}
};
int main(){
    Node a(10);
    Node b(20);
    Node c(30);
    Node d(40);
    a.next=&b;
    b.next=&c;
    c.next=&d;
    Node temp=a;// basically in this the value thatbwe hace stored int the variable a is stored
    while(true){
        cout<<temp.val<<endl;
        if(temp.next==NULL) break;
        temp=(*(temp.next));

    }
    return 0;



    
}