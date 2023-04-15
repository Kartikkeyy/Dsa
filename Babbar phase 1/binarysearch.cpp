#include<iostream>
using namespace std;

int firstocc(int arr[],int size,int key){
    int s=0,e=size-1,ans=-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==key){
            ans=m;
            e=m-1;
        }
        else if(arr[m]>key){
           e=m-1;
        }
        else if(arr[m]<key){
           s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}
int lastocc(int arr[],int size,int key){
    int s=0,e=size-1,ans=-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(arr[m]==key){
            ans=m;
            s=m+1;
        }
        else if(arr[m]>key){
           e=m-1;
        }
        else if(arr[m]<key){
           s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

int main(){
    int arr1[9]={0,1,1,2,3,4,4,4,5};
    
    cout<<firstocc(arr1,9,4)<<endl;
    cout<<lastocc(arr1,9,4)<<endl;

return 0;
}