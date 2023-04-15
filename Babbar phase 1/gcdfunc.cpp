#include<iostream>
using namespace std;

int hcf(int n,int m){
    int ans=-1;
    while(n!=m){
        if(n>m){
            n=n-m;
            ans=m;
        }
        else{
            m=m-n;
            ans=n;
        }
    }
    return ans;
}
int main(){
    cout<<hcf(12,200)<<endl;
return 0;
}