#include <iostream>
#include <string>
using namespace std;

int secu(string x){
    bool ma=false;
    bool mi=false;
    bool n=false;
    bool d=false;
    int c=0;
    for(int i=0;i<x.size();++i){
        if (x[i]-'0'<75 && x[i]-'0'>48){
            ma=true;
        }
        if (x[i]-'0'<33 && x[i]-'0'>18){
            mi= true;
        }
        if (x[i]-'0'<10 && x[i]-'0'>-1){
            n=true;
        } 
    }
    if (x.size()>=8){
        d=true;
    }
    if(ma)c++;
    if(mi)c++;
    if(d)c++;
    if(n)c++;
    if (c==4){
        return 2;
    }
    else if ( c>=2){
        return 1;
    }
    else return 0;


}

int main(){
    string passwor;
    cin>>passwor;
    int m = secu(passwor);
    if (m==2){
        cout<<"seguridad excelente";
    }
    else if(m==1){
        cout<<"seguridad media ";

    }
    else cout<<" seguridad baja  ";
    
}

