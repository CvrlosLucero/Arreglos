#include <iostream>

using namespace std;
//crear vector de n posiciones simulando el juego de buscaminas y debe imprimir cuantas minas hay//
int main(){

    int cantidadNumeros, cantidadNumeros2;
    int suma=0;
    int suma2=0;

    cout<<"Cuantos numeros necesita en su vector";
    cin>>cantidadNumeros;
    string numeros[cantidadNumeros];

    cout<<"Cuantos numeros necesita en su segundo vector";
    cin>>cantidadNumeros2;
    string numeros2[cantidadNumeros2];

    for(int i=0; i<cantidadNumeros; i++){
        cout<<"Ingrese el número en la posición: "<<i;
        cin>>numeros[i];
        suma = suma + numeros[1];
    }

    for(int j=0; j<cantidadNumeros2; j++){
        cout<<"Ingrese el número en la posición: "<<j;
        cin>>numeros2[j];
        suma2 = suma2 + numeros2[j];
    }

    if(suma>suma2){
        cout<<"El primer vector es mayor";

    }else if(suma<suma2){
        cout<<"El segundo vector es mayor";
    }else{
        cout<<"Los vectores son iguales";
    }
    return 0;
}