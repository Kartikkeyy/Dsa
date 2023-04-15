#include<iostream>
using namespace std;

void sortarr(int arr[],int n){
    if(n==0 || n==1){
        return ;
    }
    else{
        for(int i=0;i<n-1;i++){
            if(arr[i]>arr[i+1]){
                swap(arr[i],arr[i+1]);
            }
        }
    }

    return sortarr(arr,n-1);
}
int main(){
    int arr[10]={5,2,45,16,78,23,7,90,12,10};
    sortarr(arr,10);
    for(int i=0;i<10;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}