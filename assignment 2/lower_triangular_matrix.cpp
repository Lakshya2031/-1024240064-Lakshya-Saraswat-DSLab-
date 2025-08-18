#include<iostream>
using namespace std;
int main(){
    int n;
    cin>>n;
    int arr[n][n];
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr[i][j]=x;
            if(arr[i][j]!=0){
                count++;
            }
        }

    }
    
    int brr[3*n-2][3];
    brr[0][0]=n;
    brr[0][1]=n;
    brr[0][2]=count;
    
    int a1=1;
    int b1=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
           if(i>=j){
            brr[a1][b1]=i;
            b1++;
            brr[a1][b1]=j;
            b1++;
            brr[a1][b1]=arr[i][j];
            a1++;
            b1=0;



           }

        }

    }
    for(int i=0;i<3*n-2;i++){
        for(int j=0;j<3;j++){
            cout<<brr[i][j]<<" ";
        }
        cout<<endl;
    }
    return 0;
    
}