#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<char>a;
    string s="DataStructure";
    int s1=s.size();
    int i=0;
    while(i<s1){
        a.push(s[i]);
        i++;
    }
    string s2="";
    while(a.size()>0){
        s2=s2+string(1,a.top());
        a.pop();

    }
    cout<<s2;
    return 0;

    
}
