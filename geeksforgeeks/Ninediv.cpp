//Bhai Machine Learning kru ki software engineering
//Smjh nhi aa rha bhai

class Solution{   
public:
    long long int nineDivisors(long long int N){
        vector<bool> v(sqrt(1000),true);
        v[0]=false;
        v[1]=false;
        vector<int> prime;
        for(int i=2;i<=sqrt(1000);i++){
            if(v[i]==true){
                prime.push_back(i);
                for(int j=2;j*i<=sqrt(1000);j++){
                    v[j]=false;
                }
            }
        }
        for(auto &i : prime){
            cout<<i<<" ";
        }
        cout<<endl;
    }
};
#include<iostream>
#include<string>
#include<bits/stdc++.h>
#include<map>
#include<algorithm>

#define kar int
#define andrlo cin
#define baharkr cout

using namespace std;

int main(){
    
return 0;
}