#include<iostream>
#include<stack>
using namespace std;
int solve(int v1,int v2,char ch){
    if(ch=='+') return v1+v2;
    else if(ch=='-') return v1-v2;
    else if(ch=='*') return v1*v2;
    else return v1/v2;
}
int main(){
    string s="264*8/+3-";
    stack<int>val;
    for(int i=0;i<s.size();i++){
        char ch=s[i];
        if((ch>=48 && ch<=57)){
            val.push(ch-48);
        }
        else{
            int v2=val.top();
            val.pop();
            int v1=val.top();
            val.pop();
            int ans=solve(v1,v2,ch);
            val.push(ans);
        }
    }
    cout<<val.top();
    return 0;
}