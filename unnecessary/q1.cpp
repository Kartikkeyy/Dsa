#include<bits/stdc++.h>
using namespace std;
void removeDuplicates(string str) {
	    vector<char> v;
	    for(int i=0;i<str.size();i++){
	        int flag=1;
	        for(int j=0;j<i;j++){
	            if(str[j]==str[i]){
	                flag=0;
	            }
	        }
	        if(flag==1){
	            v.push_back(str[i]);
	        }
	    }
        for(char val : v){
            cout<<val;
        }
	}
int main()
{
    string s;
    getline(cin,s);
    removeDuplicates(s);
}