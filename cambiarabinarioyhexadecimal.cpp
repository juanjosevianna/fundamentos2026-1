#include <iostream>
#include <string>
#include <algorithm>
#include <vector>
#include <set>
using namespace std;

int main() {
    vector<set<int>>filas(9);
    vector<set<int>>columnas(9);
    vector<set<int>>regions(9);
    int cuadri[9][9];
    for(int i=0;i<9;++i){
        for(int j=0;j<9;++j){
            cuadri[i][j]=0;
        }
    }
    cuadri[0][0]=5;
    cuadri[0][1]=3;
    cuadri[0][4]=7;
    cuadri[1][0]=6;
    cuadri[1][3]=1;
    cuadri[1][4]=9;
    cuadri[1][5]=5;
    cuadri[2][1]=9;
    cuadri[2][2]=8;
    cuadri[2][7]=6;
    cuadri[3][0]=8;
    cuadri[3][4]=6;
    cuadri[3][8]=3;
    cuadri[4][0]=4;
    cuadri[4][3]=8;
    cuadri[4][5]=3;
    cuadri[4][8]=1;
    cuadri[5][0]=7;
    cuadri[5][0]=2;
    cuadri[5][0]=6;
    cuadri[6][0]=6;
    cuadri[6][4]=2;
    cuadri[6][8]=8;
    cuadri[7][3]=4;
    cuadri[7][4]=1;
    cuadri[7][5]=9;
    cuadri[7][8]=5;
    cuadri[8][4]=8;
    cuadri[8][7]=7;
    cuadri[8][8]=9;

    for(int y =0;y<3;++y){
        for(int k=0;k<3;++k){    
            for(int i=0;i<3;++i){
                for(int j=0;j<3;++j){
                    cout<<" " <<cuadri[k+y+1][j+i+1]<<"  ";
                }
                cout<<"|";
            }
            cout<<'\n';
        }
        cout<<"----------------------------------------\n";
    }
}
