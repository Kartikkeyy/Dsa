#include<iostream>
#include<vector>
using namespace std;

void selsort(vector<int>& arr,int n){
    for(int i=0;i<(n-1);i++){
        int minindex=i;
        for(int j=i+1;j<n;j++){
            if(arr[minindex]>arr[j]){
                minindex=j;
            }
        }
        swap(arr[minindex],arr[i]);
    }
}

int main(){
    vector<int> v;
    char ask='Y';
    while(ask=='Y'){
        int n;
        cout<<"Enter the element: ";
        cin>>n;
        v.push_back(n);
        cout<<"Do you want to enter more element(Y/N): \n";
        cin>>ask;
    }
    selsort(v,v.size());
    cout<<v[0];
return 0;
}