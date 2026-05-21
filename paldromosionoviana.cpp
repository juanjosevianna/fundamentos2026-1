#include <iostream>
#include <cmath>
using namespace std;

bool pld(int i){
    int u =i;
    int f=0;
    while (u>1){
        u/=10;
        ++f;
    }
    u=i;
    int y=0;
    while(u>=1){
        f--;
        y+=((u%10)*(pow(10,f)));
        u/=10;
    }
    return y==i;
}

int main(){
    int n ;
    cin>>n;
    if(pld(n)){
        cout<<" si es palindromo";
    }
    else{
        cout<<"no es ppalindromomo";
    }
    


}