#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    int lo=0;
    int hi=n-1;
    int mis_ele=0;
    while(lo<=hi){
        int mid=(hi+lo)/2;
        if(arr[mid]==mid+1){
            lo=mid+1;

        }
        else if(arr[mid]!=mid+1){
            hi=mid-1;
            mis_ele=mid+1;
        }
    }
    if(mis_ele==0){
        cout<<"No missing";

    }
    else{
        cout<<"Missing ele:"<<mis_ele;
    }
    return 0;
}