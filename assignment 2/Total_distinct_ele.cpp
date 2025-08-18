#include<iostream>
using namespace std;
void merge_1(int arr1[],int arr2[],int arr[],int n1,int n2,int n){
    int i=0;
    int j=0;
    int k=0;
    while(i<n1 || j<n2){
        if(i>=n1){
            arr[k]=arr2[j];
            k++;
            j++;
        }
        else if(j>=n2){
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else if(arr1[i]<arr2[j]){
            arr[k]=arr1[i];
            k++;
            i++;
        }
        else{
            arr[k]=arr2[j];
            k++;
            j++;

        }
    }

}
void merge_sort(int arr[],int n){
    if(n==1){
        return;
    }
    int a=n;
    int a1=a/2;
    int a2=n-a1;
    int arr1[a1];
    int arr2[a2];
    for(int i=0;i<a1;i++){
        arr1[i]=arr[i];
    }
    for(int j=0;j<a2;j++){
        arr2[j]=arr[a1+j];
    }
    merge_sort(arr1,a1);
    merge_sort(arr2,a2);
    merge_1(arr1,arr2,arr,a1,a2,n);

}
int main(){
    int n;
    cin>>n;
    int arr[n];
    for(int i=0;i<n;i++){
        int x;
        cin>>x;
        arr[i]=x;

    }
    merge_sort(arr,n);
    int brr[n];
    int count=0;
    for(int j=0;j<n-1;j++){
        if(arr[j]!=arr[j+1]){
            count++;
        }

    }
    cout<<count;
    return 0;
}