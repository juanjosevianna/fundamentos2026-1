#include <iostream>
#include <vector>
#include <string>
#include <random>

using namespace std;

int main()
{
    vector<vector<int>> sudoku(9, vector<int>(9, -1));
    vector<vector<int>> solucion(9, vector<int>(9, -1));
    int opcion;

    random_device rn;
    mt19937 gnr(rn());
    uniform_int_distribution<> dst(1, 5);

    opcion = dst(gnr);

    switch(opcion)
    {
        case 1 :
        {
            solucion =
            {
                {1, 2, 5, 8, 4, 6, 9, 7, 3},
                {6, 3, 8, 9, 7, 1, 2, 4, 5},
                {4, 9, 7, 2, 5, 3, 8, 6, 1},
                {8, 5, 1, 4, 2, 7, 3, 9, 6},
                {9, 4, 2, 3, 6, 8, 1, 5, 7},
                {7, 6, 3, 5, 1, 9, 4, 2, 8},
                {3, 8, 4, 6, 9, 5, 7, 1, 2},
                {5, 1, 9, 7, 8, 2, 6, 3, 4},
                {2, 7, 6, 1, 3, 4, 5, 8, 9}
            };
            break;
        }
        case 2 :
        {
            solucion =
            {
                {2, 8, 7, 4, 3, 9, 5, 1, 6},
                {6, 5, 3, 1, 7, 2, 4, 9, 8},
                {1, 9, 4, 8, 6, 5, 7, 2, 3},
                {9, 6, 1, 5, 4, 7, 3, 8, 2},
                {5, 4, 8, 2, 9, 3, 1, 6, 7},
                {3, 7, 2, 6, 1, 8, 9, 5, 4},
                {8, 2, 9, 7, 5, 4, 6, 3, 1},
                {7, 1, 5, 3, 8, 6, 2, 4, 9},
                {4, 3, 6, 9, 2, 1, 8, 7, 5}
            };
            break;
        }
        case 3 :
        {
            solucion =
            {
                {5, 3, 4, 6, 7, 8, 9, 1, 2},
                {6, 7, 2, 1, 9, 5, 3, 4, 8},
                {1, 9, 8, 3, 4, 2, 5, 6, 7},
                {8, 5, 9, 7, 6, 1, 4, 2, 3},
                {4, 2, 6, 8, 5, 3, 7, 9, 1},
                {7, 1, 3, 9, 2, 4, 8, 5, 6},
                {9, 6, 1, 5, 3, 7, 2, 8, 4},
                {2, 8, 7, 4, 1, 9, 6, 3, 5},
                {3, 4, 5, 2, 8, 6, 1, 7, 9}
            };
            break;
        }
        case 4 :
        {
            solucion =
            {
                {7, 1, 6, 4, 2, 3, 5, 8, 9},
                {8, 5, 4, 9, 1, 7, 6, 2, 3},
                {9, 2, 3, 8, 5, 6, 1, 4, 7},
                {5, 9, 8, 3, 6, 1, 4, 7, 2},
                {1, 6, 7, 2, 4, 8, 3, 9, 5},
                {3, 4, 2, 5, 7, 9, 8, 1, 6},
                {2, 8, 5, 6, 9, 4, 7, 3, 1},
                {6, 3, 1, 7, 8, 2, 9, 5, 4},
                {4, 7, 9, 1, 3, 5, 2, 6, 8}
            };
            break;
        }
        case 5 :
        {
            solucion =
            {
                {4, 3, 9, 5, 6, 1, 7, 2, 8},
                {1, 6, 7, 2, 3, 8, 4, 5, 9},
                {8, 5, 2, 4, 9, 7, 6, 1, 3},
                {2, 8, 6, 9, 5, 3, 1, 7, 4},
                {7, 9, 4, 8, 1, 6, 5, 3, 2},
                {5, 1, 3, 7, 2, 4, 9, 8, 6},
                {3, 4, 8, 1, 7, 9, 2, 6, 5},
                {6, 2, 1, 3, 4, 5, 8, 9, 7},
                {9, 7, 5, 6, 8, 2, 3, 4, 1}
            };
            break;
        }
    }

    string filas = "abcdefghi";
    int vids = 3, i = 0;
    int x, y;

    random_device rd;
    mt19937 gen(rd());
    uniform_int_distribution<> dis(0, 8);

    while(i <= 35)
    {
        x = dis(gen);
        y = dis(gen);
        if(sudoku[x][y] == -1)
        {        
            sudoku[x][y] = solucion[x][y];
            i++;
        }
    }

    cout << "bienvenido este sudoku medio facil  ;) ;)" <<  "\n" << "\n" << "el juego consiste en completar un sudoku normal pero si se equivoca mas de 3 veces pierde" << "\n";
    cout <<" el sudoku en cuestion es el siguente" << "\n" << "   ";
    for(int i = 1 ; i <= 9; i++)
    {
        cout << i << " ";
        if((i) % 3 == 0)
        {
            cout << "| ";
        }
    }
    cout << "\n";
    cout << "  ------------------------" << "\n";
    for(int i = 0; i < 9; i++)
    {
        cout << filas[i] << "| ";
        for(int j = 0; j < 9; j++)
        {            
            if(sudoku[i][j] != -1)
            {
                cout << sudoku[i][j] << " ";
            }
            else 
            {
                cout << "  ";
            }
            if((j + 1) % 3 == 0)
            {
                cout << "| ";
            }
           
        }
        cout << "\n";
        if((i + 1) % 3 == 0)
        {
            cout << "  ------------------------" << "\n";
        }
    }
    for(int i = 0; i < vids; i++)
    {
        cout<<"(=^ｪ^=) ";
    }

    cout << "\n" << "\n" << "apartir de ahora para ingresar un numero ingrese primero el numero seguido de la fila y la columnas que desee ingresar" << "\n";
    cout << "ejemplo  ----->   3 c1" << "\n";
    cout << "los gatos debajo de la cuadricula representan las vidas. fallar significa matar a un gato :< //:( mucho cuidado";
    cout << "\n" << "ya con las reglas claras el juego puede comenzar" << "\n";
    int faltan = 46;
    int a, c, d;
    char b;
    
    while(faltan > 0 && vids > 0)
    {
        cout << "ingrese su movimiento" << "\n";
        cin >> a >> b >> c;
        c--;
        d = b - 97;
        while(a < 1 || a > 9 || d < 0 || d > 8 || c < 1 || c > 8)
        {
            if(a < 1 || a > 9)
            {
                cout << "\n" << "el valor debe estar entre 1 y 9";
            }
            if(d < 0 || d > 8)
            {
                cout << "\n" << "la fila debe ser entre a y b";
            }
            if(c < 0 || c > 8)
            {
                cout << "\n" << "la columna debe estar entre 1 y 9";
            }
            cout << "\n" << "intente de nuevo: ";
            cin >> a >> b >> c;
            c--;
            d = b - 97;
        }
        if(a == solucion[d][c] && sudoku[d][c] == -1)
        {
            cout << " correcto" << "\n";
            sudoku[d][c] = a;
            faltan--;
        }
        else
        {
            cout << " error acaba de matar un gato" << "\n";
            vids--;
        }
        cout << "   ";
        for(int i = 1; i <= 9; i++)
        {
            cout << i << " ";
            if((i) % 3 == 0)
            {
                cout << "| ";
            }
        }
        cout << '\n';
        cout << "  ------------------------" << "\n";
        for(int i = 0; i < 9; i++)
        {
            cout << filas[i] << "| ";
            for(int j = 0; j < 9; j++)
            {            
                if(sudoku[i][j] != -1)
                {
                    cout << sudoku[i][j] << " ";
                }
                else cout <<"  ";
                if((j + 1) % 3 == 0)
                {
                    cout << "| ";
                }
            }        
            cout << "\n";
            if((i + 1) % 3 == 0)
            {
                cout << "  ------------------------" << "\n";
            }
        }
        for(int i = 0; i < vids; i++)
        {
            cout << "(=^ｪ^=) ";
            cout << '\n';
        }
    }
    if(vids == 0)
    {
        cout << "usted perdio el juego" << "\n" << "solucion: " << "\n";
        cout << "   ";
        for(int i = 1 ; i <= 9; i++)
        {
            cout << i << " ";
            if((i) % 3 == 0)
            {
                cout << "| ";
            }
        }
        cout << "\n";
        cout << "  ------------------------" << "\n";
        for(int i = 0; i < 9; i++)
        {
            cout << filas[i] << "| ";
            for(int j = 0; j < 9; j++)
            {            
                if(solucion[i][j] != -1)
                {
                    cout << solucion[i][j] << " ";
                }
                else 
                {
                    cout << "  ";
                }
                if((j + 1) % 3 == 0)
                {
                    cout << "| ";
                }
            
            }
            cout << "\n";
            if((i + 1) % 3 == 0)
            {
                cout << "  ------------------------" << "\n";
            }
        }
    }
    else
    {
        cout << " felicidades eres un campeon";
    }    
}
