#include<iostream>
#include<stack>
#include<string>
using namespace std;
string solve(string s1,string s2,char ch){
    return s1+s2+string(1,ch);
}
int priority(char ch){
    if(ch=='+' || ch=='-') return 1;
    return 2;
}
int main(){
    string s="2+6*4/8-3"; // infix expression-> human readable
    stack<string>val;
    stack<char>op;
    int n=s.size();
    for(int i=0;i<n;i++){

        if(s[i]>=48 && s[i]<=57){
            val.push(string(1,s[i])); // this will convert it into string
        }

        // It is a character

        else{
            // if size is zero
            if(op.size()==0) op.push(s[i]);

            // if opening bracket 
            else if(s[i]=='(') op.push(s[i]);

            // if op.top()=='('
            else if(op.top()=='(') op.push(s[i]);

            // if s[i]==')'
            else if(s[i]==')'){
                // loop till '('
                while(op.top()=='('){
                    char ch=op.top();
                    string v2=val.top();
                    val.pop();
                    string v1=val.top();
                    val.pop();
                    string ans=solve(v1,v2,ch);
                    val.push(ans);
                    op.pop();
                }
                op.top();


            }
            else{
                if(priority(s[i])>priority(op.top())) op.push(s[i]);
                else{
                while(op.size()>0 && priority(s[i])<=priority(op.top())){
                    char ch=op.top();
                    string v2=val.top();
                    val.pop();
                    string v1=val.top();
                    val.pop();
                    string ans=solve(v1,v2,ch);
                    val.push(ans);
                    op.pop();

                }
                op.push(s[i]);
                




                }
            }
            

        }
    }
    while(op.size()>0){
        char ch=op.top();
        string v2=val.top();
        val.pop();
        string v1=val.top();
        val.pop();
        string ans=solve(v1,v2,ch);
        val.push(ans);
        op.pop();

    }
    cout<<val.top();
    return 0;
}