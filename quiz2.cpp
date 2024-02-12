#include <iostream>

using namespace std;
//crear vector de n posiciones simulando el juego de buscaminas y debe imprimir cuantas minas hay//
int main(){
    int cantidadPosiciones;
    int minas=0;

    cout<<"Cuantas posiciones necesita en su juego: ";
    cin>>cantidadPosiciones;
    string buscaMinas[cantidadPosiciones];

    for(int i=0; i<cantidadPosiciones;i++){
        cout<<"Ingrese 1 para mina y 0 para vacío: "<<i;
        cin>>buscaMinas[i];
        if(buscaMinas[i]==1){
            minas++;
        }
    }
    cout<<"La cantidad de minas es: "<<minas;
    return 0;
}