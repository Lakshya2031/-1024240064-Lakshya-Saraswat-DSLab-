#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][m];
    int brr[m][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
    }
    for(int i=0;i<m;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[j][i];
        }
    }
    for(int k=0;k<m;k++){
        for(int f=0;f<n;f++){
            cout<<brr[k][f]<<" ";
        }
        cout<<endl;
    }
}