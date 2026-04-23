#include <iostream>
#include <algorithm>
using namespace std;

int main() {
    int n=0;
    double x;
    int aprob=0;
    int desap=0;
    double prom=0;
    double mats=0;
    double mim=5;
    while (n>-1e9){
        cout<<" ingrese nota ";
        cin>>x;
        cout<<'\n';
        if (x==-1){
            break;
        }
        if(x>5 || x<0){
            cout<<"esa no esta entre 0 y 5 \n ";
            continue;
        }
        if (x<3){
            desap++;
        }
        else{
            aprob++;
        }
        prom+=x;
        mats=max(x,mats);
        mim=min(x,mim);

       
    }
    cout<<"la cantidad de aprobados es  "<<aprob<<'\n';
    cout<<"la cantidad de desaprobados es  "<<desap<<'\n';
    cout<<"el proemdio es   "<<prom/(aprob+desap)<<'\n';
    cout<<"la cantidad de notas validas es "<<aprob+desap<<'\n';
    cout<<"la nota maxima fue  "<<mats<<'\n';    
    cout<<"la nota minima fue  "<<mim<<'\n';
}
