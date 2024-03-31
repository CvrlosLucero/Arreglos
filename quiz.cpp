#include <iostream>

using namespace std;
//Crear 2 vectores de n posiciones y debe imprimir cual vector es mayor//
int main(){

    //declarar variables
    int cantidadNumeros, cantidadNumeros2;
    int suma=0;
    int suma2=0;

    //pedir cantidad de numeros necesarios en el primer vector
    cout<<"Cuantos numeros necesita en su vector: ";
        cin>>cantidadNumeros;
    int numeros[cantidadNumeros];

    //pedir cantidad de numeros necesarios en el segundo vector
    cout<<"Cuantos numeros necesita en su segundo vector: ";
        cin>>cantidadNumeros2;
    int numeros2[cantidadNumeros2];

    //llenar primer vector de numeros
    cout<<"Ingrese los números del primer vector: "<<endl;
    for(int i=0; i<cantidadNumeros; i++){
        cout<<"Ingrese el número en la posición "<<i<<": ";
            cin>>numeros[i];
        suma = suma + numeros[i];
    }
    cout<<endl;

    //llenar segundo vector de numeros
    cout<<"Ingrese los números del segundo vector: "<<endl;
    for(int j=0; j<cantidadNumeros2; j++){
        cout<<"Ingrese el número en la posición: "<<j<<": ";
            cin>>numeros2[j];
        suma2 = suma2 + numeros2[j];
    }
    cout<<endl;

    //comparar vectores para saber cual es mayor, menor o si son iguales
    if(suma>suma2){
        cout<<"El primer vector es mayor.";

    }else if(suma<suma2){
        cout<<"El segundo vector es mayor.";
    }else{
        cout<<"Los vectores son iguales.";
    }
    return 0;
}