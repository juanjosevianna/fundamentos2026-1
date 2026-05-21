#include <iostream>
#include <string>
using namespace std;

string vocales={"aeiouAEIOU"};
string censurador(string x){
    string nueva;
    for(int i=0;i<x.size();++i){
        bool esvocal=false;
        for(int j=0;j<10;++j){
            if (x[i]==vocales[j])esvocal=true;
        }
        if (esvocal){
            nueva= nueva+'*';
        }
        else{
            nueva = nueva + x[i];
        }
        
    }
    return nueva;
}

int main(){
    string frase;
    getline(cin,frase);
    cout<<censurador(frase);

}