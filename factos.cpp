#include <iostream>
using namespace std;
#include <vector>
#include <cstdlib>
int fact(int i){
    int x=1;
    for(i=i;i>0;--i){
        x*=i;
    }
    return x;
    
}
int main(){
    int n;cin>>n;
    vector<int>v(n);
    double media=0;    
    cout<<" el vector es:   ";
    for(int i =0;i<n;++i){
        v[i]=rand()%10;
        cout<<v[i]<<" ";
    }
    cout<<" los factoriales son :   ";
    for(int i=0;i<n;++i){
        cout<<fact(v[i])<<" ";
        
    }
    
    
    
}