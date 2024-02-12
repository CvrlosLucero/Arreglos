#include <iostream>

using namespace std;

int main(){
    int cantidadFrutas;

    cout<<"Cuantas frutas quiere en su arreglo: ";
    cin>>cantidadFrutas;

    string frutas[cantidadFrutas];

   

    for(int i=0;i<cantidadFrutas;i++){

        cout<<"ingrese la fruta en la posición"<<i;
        cin>>frutas[i];
    }

    for(int j=0; j<cantidadFrutas; j++){
        cout<<frutas[j]<<endl;
    }

    return 0;

}