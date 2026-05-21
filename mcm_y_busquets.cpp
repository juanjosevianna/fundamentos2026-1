#include <iostream>
using namespace std;
int mcds[1000][1000];



int mcd(int a, int b){
    int x;
    int y;
    if (a==b){
        return a;
    }
    if(a>b){
        x=a;
        y=b;
    }
    else{
        x=b;
        y=a;
    }
    int j = x-y;
    return mcd(j,y);
}
int mcm(int a, int b){
    return (a*b)/mcd(a,b);
}
int main(){

cout<<" ingrese dos enteros positivps para calcularle el mcm y el mcd:  ";
int f,j;
cin>>f>>j;
cout<<" el mcd es "<<mcd(f,j);
cout<<" el mcm es  "<<mcm(f,j);

}