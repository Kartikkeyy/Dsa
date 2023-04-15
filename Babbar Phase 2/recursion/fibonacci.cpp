// // #include<iostream>
// // using namespace std;

// // int fibon(int n){
// //     if(n==0 || n==1){
// //         return n;
// //     }
// //     else{
// //         int ans= fibon(n-1)+fibon(n-2);
// //         return ans;
// //     }
// // }
// // int main(){
// //     for(int i=0;i<7;i++){
// //         cout<<fibon(i)<<" ";
// //     }
// // return 0;
// // }
// #include<iostream>
// using namespace std;

// int main(){
    
// return 0;
// }


 class Solution{
  public:
#include<string>
    
    void solve(string &S,int R,int i){
        if(i>=R){
        cout<<S<<endl;
            return S;
        }
        else{
           string output="";
           for(int j=0;j<S.length();j++){
               if(S[j]=='0'){
                   output+="01";
               }
               else{
                   output+="10";
               }
           }
           S=output;
           return solve(S,R,i+1);
        }
    }
    
    char nthCharacter(string S, int R, int N) {
        int i=1;
        solve(S,R,i);
        char d='y';
        return d;
    }
};
int main(){
    
}
