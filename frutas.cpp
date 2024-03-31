#include <iostream>

using namespace std;


int main(){
    //declarar variables
    int cantidadFrutas;

    //pedir cantidad de frutas
    cout<<"Cuantas frutas quiere en su arreglo: ";
    cin>>cantidadFrutas;

    //crear vector de frutas
    string frutas[cantidadFrutas];

    //llenar vector de frutas
    for(int i=0;i<cantidadFrutas;i++){
        cout<<"ingrese la fruta en la posición "<<i<<": ";
            cin>>frutas[i];
    }

    //imprimir vector de frutas
    for(int j=0; j<cantidadFrutas; j++){
        cout<<frutas[j]<<endl;
    }

    return 0;

}