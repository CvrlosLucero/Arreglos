#include <iostream>

using namespace std;

int main(){

    //declarar arreglos
    string nombres[5]={"Carlos","Daniel","Luisa","Simon","Christian"};
    string nombres2[5];

    //imprimir el primer arreglo (nombres)
    cout<<"Nombres en el primer arreglo: "<<endl;
    for(int i=0; i < 5; i++){
        cout<<nombres[i]<<endl;
    }

    //llenar el segundo arreglo (nombres2)
    for(int j=0; j<5;j++){
        cout<<"Ingrese los nombres para el arreglo: ";
        string name;
            cin>>name; // o cin>>nombres2[j]
        nombres2[j] = name; 
    }

    //imprimir el segundo arreglo (nombres2)
    for(int k=0; k < 5; k++){
        cout<<nombres2[k]<<endl;
    }
    
    return 0;
}