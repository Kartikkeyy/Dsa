#include<iostream>
using namespace std;

void merge(int arr[],int s,int e){
    int mid=(s+e)/2;

    int l1=mid-s+1;
    int l2=e-mid;

    auto *k1=new int[l1];
    auto *k2=new int[l2];

    int k=s;
    for(int i=0;i<l1;i++){
        k1[i]=arr[k];
        k++;
    }
    for(int i=0;i<l2;i++){
        k2[i]=arr[k];
        k++;
    }
    k=s;
    int i1=0,i2=0;
    while(i1<l1 && i2<l2){
        if(k1[i1]<k2[i2]){
            arr[k++]=k1[i1++];
        }
        else {
            arr[k++]=k2[i2++];
        }
    }
    while(i1<l1){
        arr[k++]=k1[i1++];
    }
    while(i2<l2){
        arr[k++]=k2[i2++];
    }
}


void mergesort(int arr[],int s,int e){
    if(s>=e){
        return;
    }
    int mid=(e+s)/2;

    mergesort(arr,s,mid);
    mergesort(arr,mid+1,e);

    merge(arr,s,e);
}
int main(){
    int arr[8]={23,2,42,7,2,65,90,12};
    mergesort(arr,0,7);
    for(int i=0;i<8;i++){
        cout<<arr[i]<<" ";
    }
return 0;
}