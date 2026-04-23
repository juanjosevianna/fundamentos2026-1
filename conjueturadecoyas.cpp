#include <iostream>
#include <algorithm>
using namespace std;
#define ll long long
int main() {
    ll c=0;
    ll a;
    ll mats=0;
    cin>>a;
    while (a<=1){
        cout<<" ingrese uno valido mayor que 1  \n" ;
        cin>>a;
    }
    while (a!=1){
        cout<<a<<"---> ";
        mats=max(mats,a);
        if (a%2==0){
            a/=2;
        }
        else{
            a=a*3+1;
        }
        c++;
    }
    cout<<"1 \n pasos "<<c<<'\n';
    cout<<" maximo fue  "<<mats;
}
