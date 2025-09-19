#include<iostream>
#include<queue>
#include<stack>
using namespace std;
bool check(queue<int>a,queue<int>b){
    stack<int>st;
    while(b.size()!=0){
        st.push(b.front());
        b.pop();
    }
    int count=0;
    while(a.size()!=0 && count!=a.size()){
        if(st.top()==a.front()){
            st.pop();
            a.pop();
            count++;
        }
        else{
            count++;
            int x=a.front();
            a.pop();
            a.push(x);
        }
    }
    if(a.size()==0) return true;
    return false;
}
int main(){
    queue<int>a;
    a.push(1);
    a.push(0);
    a.push(1);
    a.push(0);

    queue<int>b;
    b.push(1);
    b.push(0);
    b.push(0);      
    b.push(0);
    bool a1=check(a,b);
    cout<<a1;
    return 0;

    
    




}