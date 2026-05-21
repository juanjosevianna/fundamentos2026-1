#include <iostream>
#include <string>
using namespace std;
string mayus="ABCDEFGHIJKLMNOPQRSTUVWXYZ";

string cambiarlaprimeradelaletradeunapalabraamayuscula(string x){
    string y="";
    int g=x[0]-'0'-49;
    y=y+mayus[g];
    for (int i =1;i<x.size();++i){
        y=y+x[i];
    }
    return y;
    
}



int main(){
    string frase;
    getline(cin,frase);
    string act="";
    for(int i=0;i<frase.size();++i){
        if (frase[i]!= ' '){
            act = act+frase[i];
        }
        else{
            cout<<cambiarlaprimeradelaletradeunapalabraamayuscula(act)<<" ";
            act ="";

        }

    }
    cout<<cambiarlaprimeradelaletradeunapalabraamayuscula(act);
}