#include<iostream>
using namespace std;
int main(){
    int n;
    cout<<"Enter the number of element of array";
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;
    }
    for(int i=0,j=n-1;i<j;i++,j--){
        int temp=arr[i];
        arr[i]=arr[j];
        arr[j]=temp;
    }
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}