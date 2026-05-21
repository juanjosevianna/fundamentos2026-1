#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll c=2;
    ll a,t;
    cin>>a;
    while (a<=1){
        cout<<" ingrese uno valido mayor que 1  \n" ;
        cin>>a;
    }
    t=a;
    int u;
    while (a>1  && c<t+1){
        if(a%c==0){
            u++;
            cout<<c;
            a/=c;
            if (a==1)continue;
            cout<<'x';
        }
        else{
            c++;
        }
    }
    if(u)
}

