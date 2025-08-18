#include<iostream>
#include<vector>
using namespace std;
int main(){
    int n;
    cout<<"Enter tyhe value of n:";
    cin>>n;
    vector<vector<int>>a;
    int arr[n][n];
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            int x;
            cin>>x;
            arr[i][j]=x;


        }
    }
    vector<int>b;
    b.push_back(n);
    b.push_back(n);
    b.push_back(n);
    a.push_back(b);
    int count=0;
    for(int i=0;i<n;i++){
        for(int j=0;j<n;j++){
            
            if(i==j){
                vector<int>v;
                count=count+1;
                v.push_back(i);
                v.push_back(j);
                v.push_back(arr[i][j]);
                
                
                a.push_back(v);

            }
            
        }
    }
    cout<<endl;
    for(int h=0;h<=a.size();h++){
        for(int k=0;k<a[0].size();k++){
            cout<<a[h][k]<<" ";
            
        }
        cout<<endl;
        
    }
    return 0;
    
}