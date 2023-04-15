#include<iostream>
#include<vector>
using namespace std;

class prime{
    public:
    int n;
    vector<bool> prime;
    int countprime(int n){
    vector<bool> prime(n+1,true);
    prime[0]=prime[1]=false;
    int count=0;
    for(int i=2;i<=n;i++){
        if(prime[i]==true){
            count++;
        for(int j=2*i;j<=n;j=j+i){
            prime[j]=false;
        }
        }
    }
    cout<<count<<endl;
}
};
int main(){
    prime a;
    a.countprime(1000);
return 0;
}