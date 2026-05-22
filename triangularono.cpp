#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>
int main(){
    int n;cin>>n;
    vector<vector<int>>matrix(n,vector<int>(n));
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cin>>matrix[i][j];
        }
    }
    bool sup=true,inf=true,tri=true;
    for(int i=0;i<n;++i){
        for(int j=0;j<i;++j){
            if(matrix[i][j]!=0)sup=false;
        }
    }
    for(int i=0;i<n;++i){
        for(int j=i+1;j<n;++j){
            if(matrix[i][j]!=0)inf=false;
        }
    }
    if(sup){
        if (inf){
            cout<<"es tringular";
        }
        else cout<<"es superior";
    }
    else{
        if (inf){
            cout<<"es inferior";
        }
        else{
            cout<<"no es nada";
        }
    }
    
    
    
}