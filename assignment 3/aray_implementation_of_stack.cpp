#include<iostream>
using namespace std;
class Stack{
public:
    int arr[5];
    int idx;
    Stack(){
        idx=-1;
    }
    void push(int val){
        if(idx==4){
            cout<<"stack is full";
            return;
        }
        idx++;
        arr[idx]=val;
    }
    void pop(){
        if(idx==-1){
            cout<<"stack is empty";
            return;
        }
        idx--;
    }
    void top(){
        cout<<arr[idx];

    }
    int size(){
        return idx+1;
    }
};
int main(){
    Stack a;
    a.push(10);
    a.push(20);
    a.push(30);
    int a1=a.size();
    cout<<a1;
    cout<<endl;
    a.top();
    a.push(100);
    a.push(200);
    a.push(300);
    return 0;


}