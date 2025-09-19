#include<iostream>
#include<queue>
#include<stack>
using namespace std;
bool check(queue<int>a){
    stack<int>st;
    queue<int>b;
    int n=a.size();
    int expected=1;
    while(a.size()!=0){
        int x=a.front();
        a.pop();
        if(st.size()==0){
            st.push(x);
        }
        else{
            if(x==expected){
                expected++;
            }
            else{
                st.push(x);
            }
        }
        while(st.size()!=0 && st.top()==expected){
            st.pop();
            expected++;
        }

    }
    while(st.size()!=0 && st.top()==expected){
        st.pop();
        expected++;
    }
    if(expected-1==n && st.size()==0){
        return true;
    }
    return false;
}
int main(){
    queue<int>q;
    q.push(5);
    q.push(3);
    q.push(4);
    q.push(1);
    q.push(2);
    bool flag=check(q);
    cout<<flag;
    return 0;
}