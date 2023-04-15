#include<iostream>
#include<vector>

using namespace std;

int print(vector<char>& s){
    for(int i=0;i<s.size();i++){
        cout<<s[i];
    }
}

unsigned compress(vector<char>& a){
    vector<char> b;
    for(int i=0;i<a.size()-1;i++){
        if(a[i]==a[i+1]){
            int count=1;
            while(a[i]==a[i+1]){
                count++;
                i++;
            }
            b.push_back(a[i]);
            char c;
            sprintf(c, "%d", count);
            b.push_back(c);
        }
        else{
            b.push_back(a[i]);
        }
    }
    print(b);
}

int main(){
    vector<char> b={'a','a','a','b','b','c','c','c','c','c'};
    compress(b);
return 0;
}