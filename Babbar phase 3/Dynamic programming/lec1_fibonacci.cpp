// #include<bits/stdc++.h>
#include<iostream>
#include<vector>
#include<algorithm>

#define mod 1000000007

using namespace std;

int findfib(int n,vector<int>& dp){

    if(n==0 || n==1){
        return 1;
    }
    else if(dp[n]!=-1){
        return dp[n];
    }
    else{
        dp[n]=findfib(n-1,dp) + findfib(n-2,dp);
        return dp[n];
    }
}
int main(){
    int n;
    cout<<"Enter your number: ";
    cin>>n;
    vector<int> dp(n+1);
    for(int i=0;i<=n;i++){
        dp[i]=-1;
    }
    int ans;
    ans=findfib(n,dp);
    cout<<"Your Fibonacci no. "<<ans<<endl;
    
return 0;
}