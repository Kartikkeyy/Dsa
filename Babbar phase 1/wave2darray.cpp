#include<iostream>
using namespace std;

int main(){
    int n,m;
    cout<<"Enter your rows and columns respectively: ";
    cin>>n>>m;
    int arr[n][m];
    for(int i=0;i<n;i++){
        for(int j=0;j<m;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    int j=0;
        X:
        for(int i=0;i<n && j<m;i++){
            cout<<arr[i][j]<<" ";
            if(i==n-1 ){
                j++;
                goto Y;
            }
        }
        Y:
        for(int i=n-1;i>=0 && j<m;i--){
            cout<<arr[i][j]<<" ";
            if(i==0){
                j++;
                goto X;
            }
        }
return 0;
}