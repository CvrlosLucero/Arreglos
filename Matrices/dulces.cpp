#include <iostream>

using namespace std;

int main(){
    //declarar variables
    int i, j, filaDulces, columnaDulces;
    string nombreProducto, valorProducto;

    //pedir tamaño de la máquina de dulces
    cout<<"Ingrese el tamaño de su máquina de dulces en fila: ";
    cin>>filaDulces;
    cout<<"Ingrese el tamaño de su máquina de dulces en columna: ";
    cin>>columnaDulces;

    //declarar vector
    string dulces[filaDulces][columnaDulces];

    //llenar vector
    for(i=0; i<filaDulces; i++){
        for(j=0; j<columnaDulces; j++){
            cout<<"Ingrese el nombre del producto: ";
                cin>>nombreProducto;
            cout<<"Ingrese el valor del producto: ";
                cin>>valorProducto;
            dulces[i][j] = "Nombre: " + nombreProducto + " Precio: " + valorProducto;

            cout<<"Posición del producto: "<<"("<<i<<","<<j+1<<")"<<endl;
            cout<<endl;
        }
    }

    //Imprimir vector
    for(i=0; i<filaDulces; i++){
        for(j=0; j<columnaDulces; j++){
            cout<<dulces[i][j]<<" ";
            cout<<"("<<i<<","<<j+1<<")"<<endl;
        }
        cout<<endl;
    }

    return 0;
}