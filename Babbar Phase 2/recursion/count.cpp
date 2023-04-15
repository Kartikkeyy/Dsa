#include<iostream>
using namespace std;

int count(int n){

    //Base Case: 
    if(n==0){
        exit;
    }

    //Recursive Relation:
    else{
    count(n-1);
    cout<<n<<endl;
    }
}

int main(){
    int n;
    cin>>n;
    count(n);
return 0;
}