#include<iostream>
#include<vector>
#include<string>
using namespace std;

void permute(string str,int index,vector<string>& ans){
    //Base Case
    if(index>=str.length()){
        ans.push_back(str);
        return ;
    }
    // Recursive call
    for(int i=index;i<str.length();i++){
        swap(str[index],str[i]);
        permute(str,index+1,ans);
        swap(str[index],str[i]);
    }
}
int main(){
    string str;
    cout<<"Enter your string: ";
    cin>>str;
    vector<string> ans;
    int index=0;
    permute(str,index,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
    return 0;
}