#include <iostream>
#include <string>
#include <algorithm>
using namespace std;

int main() {
    int n ,m;
    cin>>n;
    m=n;
    int x=1;
    int bin =0;
    string hex="";
    string sishex="0123456789abcdef";
    while (n>0){
        bin+=(n%2)*x;
        x*=10;
        n/=2;
    }
    while (m>0){
        hex=sishex[(m%16)]+hex;
        m/=16;
    }
    cout<<" en binario es  "<<bin<<'\n'<<" el otro es es  "<<hex;
}
