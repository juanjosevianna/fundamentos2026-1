#include <iostream>
#include <vector>
#include <cstdlib>
using namespace std;
bool esprimo(int j){
    int primardos[]={2,3,5,7,11,13,17,19,23,29,31,37,41,43,47};
    for(int i=0;i<15;++i){
        if (j==primardos[i]){
            return true;
        }

    }
    return false;
}
int main(){
    int n;
    cin>>n;
    vector<vector<int>>v(n,vector<int>(n));
    int par=0,impar=0,multi=0,prim =0;
    for(int i =0;i<n;++i){
        for(int j=0;j<n;++j){
            v[i][j]=rand()%51;
            if (v[i][j]%2==0){
                par++;
            }
            else{
                impar++;
            }
            if(v[i][j]%3==0){
                multi++;
            }
            if(esprimo(v[i][j])){
                prim++;
            }
            
        }
    }
    int d1=0,d2=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            if(i==j){
                d1+=v[i][j];
            }
            if (i+j==n-1){
                d2+=v[i][j];
            }
        }
    }
    vector<int>fila1=v[0];
    for(int i=0;i<n;++i){
        fila1[i]*=fila1[i];
    }
    vector<int>columnax;
    for (int i =0;i<n;++i){
        columnax.push_back((v[i][n-1])*(v[i][n-1]));
    }
    for(int i=0;i<n;++i){
        fila1[i]+=columnax[i];
    }
    vector<double>media;
    int acum=0;
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            media.push_back(v[i][j]);
            acum+=v[i][j];
        }
    }
    acum/=(n*n);
    for(int i=0;i<media.size();++i){
        media[i]/=acum;
    }
    cout<<" la matrix es:   \n";
    for(int i=0;i<n;++i){
        for(int j=0;j<n;++j){
            cout<<v[i][j]<<"  ";
        }
        cout<<'\n';
    }
    cout<<"la suma de la diagonal 1 es :"<<d1<<"  y la suma de la diagonal 2 es "<<d2<<'\n';
    cout<<"el vector resultante es  :  ";
    for(int i=0;i<n;++i){
        cout<< fila1[i]<<" ";
    }
    cout<<'\n';
    cout<<"en total hay:  \n";
    cout<<"pares :  "<<par;
    cout<<"\n impare:  "<<impar;
    cout<<"\n primos:  "<<prim;
    cout<<"\n multiplos de 3:   "<<multi;
    cout<<"\n la media es  :  "<<acum;
    cout<<" \nel vector de los cocientes es : \n";
    for(int i=0;i<media.size();++i){
        cout<<media[i]<<" ";
    }
    

}