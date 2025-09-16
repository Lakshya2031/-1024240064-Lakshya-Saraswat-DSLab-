#include<iostream>
#include<queue>
#include<stack>
using namespace std;
void interleave_queue(queue<int>&a){
    int n=a.size();
    int p=n/2;
    stack<int>st;
    for(int i=0;i<p;i++){
        st.push(a.front());
        a.pop();
    }
    while(st.size()>0){
        a.push(st.top());
        st.pop();
    }
    for(int i=0;i<p;i++){
        st.push(a.front());
        a.pop();
    }
    while(st.size()>0){
        a.push(st.top());
        a.push(a.front());
        a.pop();
        st.pop();
    }
    for(int i=0;i<n;i++){
        st.push(a.front());
        a.pop();
    }
    while(st.size()>0){
        a.push(st.top());
        st.pop();
    }


}
void display(queue<int>a){
    int n=a.size();
    for(int i=0;i<n;i++){
        cout<<a.front();
        cout<<" ";
        a.pop();
    }
}
int main(){
    queue<int>a;
    int n;
    cout<<"Enter the value of n";
    cin>>n;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        a.push(x);
    }
    interleave_queue(a);
    display(a);

}