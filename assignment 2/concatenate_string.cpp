#include<iostream>
#include<string>
using namespace std;
int main(){
    // concatenate the string
    string s1;
    string s2;
    cin>>s1>>s2;
    string s3=s1+s2;
    cout<<s3;
    cout<<endl;
   

    // Reverse the string
    string s4;
    cin>>s4;
    int i=0;
    int j=s4.size()-1;
    while(i<=j){
        char temp=s4[i];
        s4[i]=s4[j];
        s4[j]=temp;
        i++;
        j--;

    }
    cout<<s4;


    
}