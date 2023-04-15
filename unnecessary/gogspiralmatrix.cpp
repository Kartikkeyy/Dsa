#include<iostream>
using namespace std;

int main(){
    int r=4,c=4;
    int matrix[r][c]={{1, 2, 3, 4},
                      {42,23,32,1},
                      {67,45,23,12},
                      {90,32,45,67}};
    int count=0;
    int total=r*c;
    int frow=0,fcol=0;
    int lrow=r-1;
    int lcol=c-1;
    
    while(count<total){
        for(int i=frow;i<=lcol;i++){
            cout<<matrix[frow][i]<<" ";
            count++;
        }
        frow++;
        
        for(int i=frow;i<=lrow;i++){
            cout<<matrix[i][lcol]<<" ";
            count++;
        }
        lcol--;
        
        for(int i=lcol;i>=fcol;i--){
            cout<<matrix[lrow][i]<<" ";
            count++;
        }
        lrow--;
        
        for(int i=lrow;i>=frow;i--){
            cout<<matrix[i][fcol]<<" ";
            count++;
        }
        fcol++;
    }
return 0;
}