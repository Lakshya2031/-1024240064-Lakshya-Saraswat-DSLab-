#include<iostream>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int arr[n][3];
    for(int i=0;i<n;i++){
        for(int j=0;j<3;j++){
            int x;
            cin>>x;
            arr[i][j]=x;
        }
    }
    
    int brr[3][n];
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            brr[i][j]=arr[j][i];
            
        }
    }
    for(int i=0;i<3;i++){
        for(int j=0;j<n;j++){
            cout<<brr[i][j]<<" ";
            
        }
        cout<<endl;
    }
    return 0;

}