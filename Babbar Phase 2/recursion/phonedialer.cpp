#include<iostream>
#include<string>
#include<vector>
using namespace std;

void solve(string str , string output , int index , string mapped[] , vector<string>& ans){
    //base case:
    if(index>=str.length()){
        ans.push_back(output);
        return ;
    }
    int no=str[index]-'0';
    string valueat=mapped[no];
    for(int i=0;i<valueat.length();i++){
        output.push_back(valueat[i]);
        solve(str,output,index+1,mapped,ans);
        output.pop_back();
    }
}
int main(){
    string str;
    cout<<"Enter the string : ";
    cin>>str;
    if(str.length()==0){
        return 0;
    }
    int index=0;
    string output="";
    string mapped[]={"","abc","def","ghi","jkl","mno","pqr","stw","uvx","yz"};
    vector<string> ans;
    solve(str,output,index,mapped,ans);
    for(int i=0;i<ans.size();i++){
        cout<<ans[i]<<" ";
    }
return 0;
}
