#include<iostream>
#include<vector>
using namespace std;

int main(){
    int num;
    cout<<"Enter the size of your array: ";
    cin>>num;
    vector<int> v;
    cout<<"\nEnter the array: ";
    for(int i=0;i<num;i++)
    {
        int a;
        cin>>a;
        v.push_back(a);
    }
    int n;
    cout<<"\nEnter the choice which you want to perform: \n1: Bubble Sort\n2: Insertion Sort"<<endl;
    cin>>n;
    if(n==1){
        cout<<"\nBUBBLE SORT"<<endl;
        for(int i=0;i<v.size();i++){
        for(int j=i;j<v.size();j++){
            if(v[j]<v[i]){
                swap(v[j],v[i]);
            }
        }
        cout<<endl;
        for(int k=0;k<v.size();k++){
            cout<<v[k]<<" ";
        }
        }
    }
    else if(n==2){
        cout<<"\nSELECTION SORT"<<endl;
        int min_index;  
        for (int i = 0; i <v.size(); i++){ 
        min_index = i; 
        for (int j = i+1; j <v.size(); j++){ 
        if (v[j] < v[min_index]) 
            min_index = j; 
        }
        swap(v[min_index],v[i]); 
        cout<<endl;
        for(int k=0;k<v.size();k++){
            cout<<v[k]<<" ";
        }
        } 
    }    
return 0;
}

