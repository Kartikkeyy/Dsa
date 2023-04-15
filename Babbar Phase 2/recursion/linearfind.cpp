#include<iostream>
using namespace std;

int findit(int *arr,int n,int f){
    if(n==0){
        return false;
    }
    if(arr[0]==f){
        return true;
    }
    else{
       return findit(arr+1,n-1,f);
    }
}
int main(){
    int arr[6]={2,4,5,12,7,9};
    bool ans=findit(arr,6,11);
    cout<<ans<<endl;
return 0;
}