#include <iostream>

using namespace std;

int main(){

    int i, j, filaDulces, columnaDulces;
    string nombreProducto, valorProducto;

    cout<<"Ingrese el tamaño de su máquina de dulces en fila: ";
    cin>>filaDulces;
    cout<<"Ingrese el tamaño de su máquina de dulces en columna ";
    cin>>columnaDulces;

    string dulces[filaDulces][columnaDulces];

    //Creación del segundo vector
    for(i=0; i<filaDulces; i++){
        for(j=0; j<columnaDulces; j++){
            cout<<"Ingrese el nombre del producto: ";
            cin>>nombreProducto;
            dulces[i][j] = dulces[i][j]+nombreProducto;
            cout<<"Ingrese el valor del producto: ";
            cin>>valorProducto;
            dulces[i][j] = dulces[i][j]+valorProducto;
            cout<<"Posición del producto: "<<"("<<i<<","<<j+1<<")"<<endl;
        }

    }

    //Imprimir segundo vector
    for(i=0; i<filaDulces; i++){
        for(j=0; j<columnaDulces; j++){
            cout<<dulces[i][j]<<" ";
            cout<<"("<<i<<","<<j+1<<")"<<endl;
        }
        cout<<endl;
    }

    return 0;
}