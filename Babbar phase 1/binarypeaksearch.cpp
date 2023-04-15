#include<iostream>
using namespace std;

int findpeak(int arr[],int size){
    int s=0,e=size-1;
    int m=(e+s)/2;
    while(s<e){
        if(arr[m+1]>arr[m]){
            s=m+1;
        }
        else{
            e=m;
        }
        m=(e+s)/2;
    }
    return arr[s];
}

int main(){
    int arr[]={2,5,7,12,6,2,1};
    cout<<findpeak(arr,7);
return 0;
}