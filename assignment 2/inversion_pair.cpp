#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    int count=0;
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    for(int j=0;j<n-1;j++){
        for(int k=j+1;k<n;k++){
         if(arr[j]>arr[k]){
            count++;
         }
    }
    }
    cout<<count;
    return 0;
}