#include<iostream>
using namespace std;

int partition(int arr[],int s,int e){
    int part=arr[s];
    int cunt=0;

    // Finding the location for element in sorted array 
    for(int i=s+1;i<=e;i++){
        if(arr[i]<=part){
            cunt++;
        }
    }
    // putting in sorted index
    swap(arr[s],arr[s+cunt]);
    int pointingindex=s+cunt;
    int i=s;
    int j=e;
    while(i<pointingindex && j>pointingindex){
       
        while(arr[i]<part){
            i++;
        }
        while(arr[j]>part){
            j--;
        }
        if(i<pointingindex && j>pointingindex){
            swap(arr[i++],arr[j--]);
        }
     
    }
    return pointingindex;
}
void quicksort(int arr[],int s,int e){
    //base case
    if(s>=e){
        return ;
    }
    
    //recursive relation
    int p=partition(arr,s,e);

    quicksort(arr,s,p-1);
    quicksort(arr,p+1,e);
}
int main(){
    int chudna[7]={34,12,7,89,32,56,3};
    int n=7;
    quicksort(chudna,0,n-1);
    for(int i=0;i<7;i++){
        cout<<chudna[i]<<" ";
    }
return 0;
}