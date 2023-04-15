#include<iostream>
using namespace std;
#define ll long long

ll powerof(int k,int n){
    if(n==0){
        return 1;
    }
    int ans=powerof(k,n/2);
    if(n%2==0){
       return ans*ans;
    }
    else{
       return k*ans*ans;
    }
}

int main(){
    int n;
    int power;
    cin>>n>>power;
    ll int prod=powerof(n,power);
    
    cout<<prod;
return 0;
}