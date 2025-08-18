#include<iostream>
using namespace std;
int main(){
    int n,m;
    cout<<"Enter the value of m and n";
    cin>>n>>m;
    int arr[n][m];
     for(int i=0;i<n;i++){
        for(int k=0;k<m;k++){
            int x;
            cin>>x;
            arr[i][k]=x;
        }
        
    }
    
    int p,q;
    cin>>p>>q;
    int brr[p][q];
    for(int i=0;i<p;i++){
        for(int k=0;k<q;k++){
            int x;
            cin>>x;
            brr[i][k]=x;
        }
        
    }
    int crr[n][q];

    if(p==m){
        for(int i=0;i<n;i++){
            for(int j=0;j<q;j++){
                crr[i][j]=0;
                for(int k=0;k<m;k++){
                    crr[i][j]=crr[i][j]+arr[i][k]*brr[k][j];
                    

                }
            }
        }


    }
    for(int i=0;i<n;i++){
        for(int k=0;k<q;k++){
            cout<<crr[i][k]<<" ";
        }
        cout<<endl;
    }
    return 0;


}