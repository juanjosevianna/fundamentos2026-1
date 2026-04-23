#include <iostream>
using namespace std;

int main() {
    int n=0;
    int x;
    while (n>-1e9){
       cout<<"ingrese el valor; ";
       cin>>x;
       while(x<0 || x>6){
        cout<< "    ingrese uno valido  ";
        cin>>x;
       }
       if (x!= 1 && x!=0){
        n+=x;
        cout<<"---> suma acumulada:  "<<n<<'\n';
       }
       else if (x==1){
        cout<<" perdio toods sus puntos fin del juego  ";
        break;
       }
       else{
        cout<<" uste decidio acabr el juego, suma acumulada igual a: "<<n;
            break;
       }

       
    }
}
