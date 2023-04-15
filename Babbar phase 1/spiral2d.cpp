#include<iostream>
using namespace std;
#define n 3
#define m 3
int bins(int arr[n][m],int k){
    for(int i=0;i<n;i++){
        int row=i; 
        int s=0,e=m-1;
    int mid=(s+(e-s)/2);
    while(e>=s){
        if(arr[row][mid]>k){
            e=mid-1;
        }
        else if(arr[row][mid]<k){
            s=mid+1;
        }
        else if(arr[row][mid]==k){
            cout<<row+1<<" "<<mid+1;
            break;
        }
        mid=(s+(e-s)/2);
    }
    }
}
int main(){
    int arr[3][3];
    for(int i=0;i<3;i++){
        for(int j=0;j<3;j++){
            cin>>arr[i][j];
        }
        cout<<endl;
    }
    bins(arr,4);
return 0;
}
