#include <iostream>
using namespace std;
bool prft(int i){
    int suma=0;
    for(int j=1;j<i;++j){
        if (i%j==0){
            suma+=j;
        }
    }
    return suma==i;
}

int main(){
    int n=1;
    while (n!=0){
        cin>>n;
        if (prft(n)){
            cout<<"es perfecto ";
        }
        else {
            cout<<"no es perfecto \n";
        }
    }
}