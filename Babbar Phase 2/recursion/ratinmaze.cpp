#include<iostream>
#include<vector>
#include<algorithm>
#include<string>

using namespace std;
bool hai_rasta(int X,int Y,vector<vector<int>>& mat,vector<vector<int>> path){
    if(X>=0 && X<mat.size() && Y>=0 && Y<mat[0].size() && mat[X][Y]==1 && path[X][Y]==0){
        return true;
    }
    else{
        return false;
    }
}
void pathfind(vector<vector<int>>& mat,int x,int y,vector<string>& ans,vector<vector<int>> path,string rasta){
    //basecase
    if(x==mat.size()-1 && y==mat[0].size()-1){
        ans.push_back(rasta);
        return;
    }

    path[x][y]=1;

    int nx=x+1;
    int ny=y;
    if(hai_rasta(nx,ny,mat,path)){
        rasta.push_back('D');
        pathfind(mat,nx,ny,ans,path,rasta);
        rasta.pop_back();
    }

    nx=x;
    ny=y-1;
    if(hai_rasta(nx,ny,mat,path)){
        rasta.push_back('L');
        pathfind(mat,nx,ny,ans,path,rasta);
        rasta.pop_back();
    }
    nx=x;  
    ny=y+1;
    if(hai_rasta(nx,ny,mat,path)){
        rasta.push_back('R');
        pathfind(mat,nx,ny,ans,path,rasta);
        rasta.pop_back();
    }
    nx=x-1;
    ny=y;
    if(hai_rasta(nx,ny,mat,path)){
        rasta.push_back('U');
        pathfind(mat,nx,ny,ans,path,rasta);
        rasta.pop_back();
    }
    path[x][y]=0;
}

int main(){
    vector<vector<int>> mat={{1,0,0},{1,1,0},{1,1,1}};
    vector<string> ans;
    int x=0;
    int y=0;
    vector<vector<int>> path=mat;
    for(int i=0;i<mat.size();i++){
        for(int j=0;j<mat[0].size();j++){
            path[i][j]=0;
            // cout<<mat[i][j]<<" ";
        }
        // cout<<endl;
    }
    string rasta="";
    pathfind(mat,x,y,ans,path,rasta);
    for(auto &itr : ans){
        cout<<itr<<" ";
    }
return 0;
}
