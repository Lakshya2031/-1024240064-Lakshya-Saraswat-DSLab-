#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            int x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    for(int i=0;i<n;i++){
        int a=0;
        for(int k=0;k<m;k++){
            a=a+arr[i][k];

        }
        cout<<a<<" ";
    }
    cout<<endl<<"Columns"<<endl;
    for(int i=0;i<m;i++){
        int a=0;
        for(int k=0;k<n;k++){
            a=a+arr[k][i];

        }
        cout<<a<<" ";
    }
    return 0;
}