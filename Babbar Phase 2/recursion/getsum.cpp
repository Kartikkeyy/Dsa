#include<iostream>
using namespace std;

int getsum(int *arr,int size){
    if(size==0){
        return 0;
    }
    if(size==1){
        return 1;
    }
    else{
    int sum=getsum(arr+1,size-1);
    int ret=sum+arr[0];
    return ret;
    }
}
int main(){
    int arr[5]={5,6,7,12,4};
    int size=5;
    int sum=getsum(arr,size);
    cout<<"Sum of the given array is: "<<sum<<endl;
return 0;
}