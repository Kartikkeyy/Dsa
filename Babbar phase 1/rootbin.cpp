#include<iostream>
using namespace std;

int rootint(int n){
    int s=0,e=n,ans=-1;
    int m=s+(e-s)/2;
    while(s<=e){
        if(n==m*m){
            return m;
        }
        else if(n<(m*m)){
            e=m-1;
        }
        else if(n>=(m*m)){
            ans=m;
            s=m+1;
        }
        m=s+(e-s)/2;
    }
    return ans;
}

double rootdec(int n, int precision){
    double root=rootint(n);
    double factor=1;
    for(int i=0;i<precision;i++){
        factor=factor/10;
        while(root*root<=n){
            if((root+factor)*(root+factor)>n){
                break;
            }
            else{
                root=root+factor;
            }
        }
    }
    return root;
}

int main(){
    int n;
    cout<<"Enter the value for root"<<endl;
    cin>>n;
    cout<<rootdec(n,4);
return 0;
}
