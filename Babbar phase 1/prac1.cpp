#include<iostream>
using namespace std;

void shift(int arr[],int n,int arr1[]){
    int j=0;
    for(int i=0;i<n;i++){
        if(arr[i]!=0){
            arr1[j]=arr[i];
            j++;
        }
    }
    while(j<n){
        arr1[j]=0;
        j++;
    }
}
void print(int arr[],int n){
    for(int i=0;i<n;i++){
        cout<<arr[i]<<" ";
    }
}
int main(){
    int a[]={1,2,3,0,6,0,7,9};
    int b[8];
    shift(a,8,b);
    print(b,8);
return 0;
}