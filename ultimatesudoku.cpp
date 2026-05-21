#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main()
{
    vector<vector<int>>sudoku(9,vector<int>(9,-1));
    int solucion[9][9];
    string alfa="abcdefghi";
    int vids=3;
    sudoku[0][0]=1;
    sudoku[0][2]=5;
    sudoku[0][4]=4;
    sudoku[0][5]=6;
    sudoku[0][6]=9;
    sudoku[0][8]=3;
    sudoku[1][0]=6;
    sudoku[1][1]=3;
    sudoku[1][5]=1;  
    sudoku[1][8]=5;
    sudoku[2][2]=7;
    sudoku[2][3]=2;
    sudoku[2][4]=5;
    sudoku[3][0]=8;
    sudoku[3][5]=7;
    sudoku[3][6]=3;
    sudoku[3][7]=9;
    sudoku[4][0]=9;
    sudoku[4][5]=8;
    sudoku[4][6]=1;
    sudoku[5][0]=7;
    sudoku[5][1]=6;
    sudoku[5][3]=5;
    sudoku[5][4]=1;
    sudoku[5][6]=4;
    sudoku[6][3]=6;
    sudoku[6][4]=9;
    sudoku[6][7]=1;
    sudoku[7][0]=5;
    sudoku[7][3]=7;
    sudoku[7][4]=8;
    sudoku[8][0]=2;
    sudoku[8][3]=1;
    sudoku[8][5]=4;
    sudoku[8][6]=5;
    
    
    solucion[0][0]=1;
    solucion[0][1]=2;
    solucion[0][2]=5;
    solucion[0][3]=8;
    solucion[0][4]=4;
    solucion[0][5]=6;
    solucion[0][6]=9;
    solucion[0][7]=7;
    solucion[0][8]=3;
    solucion[1][2]=8;
    solucion[1][0]=6;
    solucion[1][1]=3;
    solucion[1][3]=9;
    solucion[1][4]=7;
    solucion[1][5]=1;  
    solucion[1][6]=2;
    solucion[1][7]=4;
    solucion[1][8]=5;
    solucion[2][0]=4;
    solucion[2][1]=9;
    solucion[2][2]=7;
    solucion[2][3]=2;
    solucion[2][4]=5;
    solucion[2][5]=3;
    solucion[2][6]=8;
    solucion[2][7]=6;
    solucion[2][8]=1;
    solucion[3][0]=8;
    solucion[3][1]=5;
    solucion[3][2]=1;
    solucion[3][3]=4;
    solucion[3][4]=2;
    solucion[3][5]=7;
    solucion[3][6]=3;
    solucion[3][7]=9;
    solucion[3][8]=6;
    solucion[4][0]=9;
    solucion[4][1]=4;
    solucion[4][2]=2;
    solucion[4][3]=3;
    solucion[4][5]=8;
    solucion[4][6]=1;
    solucion[4][7]=5;
    solucion[4][8]=7;
    solucion[4][4]=6;
    solucion[5][0]=7;
    solucion[5][1]=6;
    solucion[5][2]=3;
    solucion[5][3]=5;
    solucion[5][4]=1;
    solucion[5][5]=9;
    solucion[5][6]=4;
    solucion[5][7]=2;
    solucion[5][8]=8;
    solucion[6][0]=3;
    solucion[6][1]=4;
    solucion[6][2]=8;
    solucion[6][3]=6;
    solucion[6][4]=9;
    solucion[6][5]=5;
    solucion[6][6]=7;
    solucion[6][8]=2;
    solucion[6][7]=1;
    solucion[7][0]=5;
    solucion[7][1]=1;
    solucion[7][2]=9;
    solucion[7][3]=7;
    solucion[7][4]=8;
    solucion[7][5]=2;
    solucion[7][6]=6;
    solucion[7][7]=3;
    solucion[7][8]=4;
    solucion[8][0]=2;
    solucion[8][1]=7;
    solucion[8][2]=6;
    solucion[8][3]=1;
    solucion[8][4]=3;
    solucion[8][5]=4;
    solucion[8][6]=5;
    solucion[8][7]=8;
    solucion[8][8]=9;
    cout<<"bienvenido este sudoku medio facil  ;) ;) .  \n\n el juego consiste en completar un sudoku normal pero si se equivoca mas de 3 veces pierde \n";
    cout<<" el sudoku en cuestion es el siguente \n  ";
    for(int i =1;i<=9;++i){
        cout<<i;
        if((i)%3==0)cout<<"|";
    }
    cout<<'\n';
    cout<<"----------------\n";
    for(int i=0;i<9;++i){
        cout<<alfa[i]<<"|";
        for(int j=0;j<9;++j){
            
           if (sudoku[i][j]!=-1)cout<<sudoku[i][j]<<"";
           else cout <<" ";
           if((j+1)%3==0)cout<<"|";
        }
        
        cout<<"\n";
        if ((i+1)%3==0)cout<<"----------------\n";
    }
    for(int i =0;i<vids;++i){
        cout<<"(=^*ｪ*^=) ";
    }

    cout<<" \n\n apartir de ahora para ingresar un numero ingrese primero el numero seguido de la fila y la columnas que desee ingresar\n";
    cout<<" ejemplo----->   3 c1\n";
    cout<<" las filas van (a-i) y las columnas de (1-9) si se sale se invalidara la posicion \n";
    cout<<"los gatos debajo de la cuadricula representan las vidas. fallar significa matar a un gato :< //:( mucho cuidado";
    cout<<"\n ya con las reglas claras el juego puede comenzar ";
    int faltan =0;
    while(faltan<46 && vids>0){
        cout<<"ingrese su movimiento \n";
        int a,c;char b;
        cin>>a>>b>>c;
        while(b>'i' || b<'a' || c>9 || c<1){
            cout<<" posicion invaliida \n";
            continue;
        }
        c--;
        int d = b-97;
        if ( sudoku[d][c]!=-1){
            cout<<"posicion ocupada  \n";
            continue;
        }
        if (solucion[d][c]==a){
            cout<<" correcto'\n";
            sudoku[d][c]=a;
            faltan++;
        }
        else{
            cout<<" error acba de matar un gato \n";
            vids--;

        }
        cout<<"  ";
        for(int i =1;i<=9;++i){
        cout<<i;
        if((i)%3==0)cout<<"|";
    }
    cout<<'\n';
    cout<<"----------------\n";
    for(int i=0;i<9;++i){
        cout<<alfa[i]<<"|";
        for(int j=0;j<9;++j){
            
           if (sudoku[i][j]!=-1)cout<<sudoku[i][j]<<"";
           else cout <<" ";
           if((j+1)%3==0)cout<<"|";
        }
        
        cout<<"\n";
        if ((i+1)%3==0)cout<<"----------------\n";
    }
    for(int i =0;i<vids;++i){
        cout<<"(=^*ｪ*^=) ";
        cout<<'\n';
    }
    }
    if (vids ==0){
       cout<< "usted perdio el juego     ";
    }
    else{
        cout<<" felicidades eres un campeon";
    }
}