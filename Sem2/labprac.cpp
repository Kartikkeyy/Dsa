#include<iostream>
#include<unordered_map>
#include<vector>
#include<cmath>
using namespace std;

// unordered_map<int,int> hash;

void using_mid(int value,unordered_map<int,int>& hash){
    long long int temp=value*value;
    vector<int> v;
    while(temp>0){
        v.push_back(temp%10);
        temp=temp/10;
    }
    int d=v.size()/2;
    int key=v[d-1]*100 + v[d]*10 + v[d+1];
    hash[key]=value;
}

void fold(int value,unordered_map<int,int>& hash){
    int l=log10(value)+1;
    int d=pow(10,l/2)+1;
    long long int key=value%d + value/d;
    cout<<value%d<<" "<<value/d<<endl;
    hash[key]=value;
}
int main(){
    unordered_map<int,int> hash;
    X:
    int x;
    cout<<"\nEnter the value: ";
    cin>>x;
    int n;
    cout<<"\nEnter your choice: \n1.) Mid-Square method\n2.) Folding method"<<endl;
    cin>>n;
    
    if(n==1){
        using_mid(x,hash);
    }
    else if(n==2){
        fold(x,hash);
    }
    else{
        cout<<"Invalid choice please enter again"<<endl;
    }
    cout<<"Hash table : "<<endl;
    for(auto& it:hash){
        cout<<it.first<<" "<<it.second<<endl;
    }
    char c;
    cout<<"Do you want to again enter the value: y/n: ";
    cin>>c;
    if(c=='y'){
        goto X;
    }
    else{
        cout<<"\n****Program Ends****"<<endl;
        return 0;
    }
}