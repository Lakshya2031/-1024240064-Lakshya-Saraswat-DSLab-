#include<iostream>
#include<stack>
#include<string>
using namespace std;
int main(){
    stack<char>a;
    string s="((()()))()";
    int s1=s.size();
    int i=0;
    while(i<s1){
        if(a.size()==0){
            a.push(s[i]);
            i++;
        }
        else{
        if(a.top()=='(' && s[i]==')'){
            a.pop();
            i++;
        }
        else{
        a.push(s[i]);
        i++;
        }
    }
    }
    if(a.size()==0){
        cout<<"Balanced";
    }
    else{
        cout<<"Not Balanced";
    }
    return 0;

    
}