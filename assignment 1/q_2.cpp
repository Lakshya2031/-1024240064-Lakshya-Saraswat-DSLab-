#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cin>>n;
    vector<int>v;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        v.push_back(x);
    }
    for(int j=0;j<v.size()-1;j++){
        if(v[j]==v[j+1]){
            v.erase(v.begin()+(j+1));
        }
        else{
            
        }
        
    }
    for(int i=0;i<v.size();i++){
        cout<<v[i]<<" ";
    }
    return 0;
}