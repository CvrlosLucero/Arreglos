#include <iostream>

using namespace std;

int main(){

    //declarar variables
    int i, j, filaDulces, columnaDulces;
    string nombreProducto, valorProducto;

    //Vector de calculadora
    string calc[5][3]={
        {"1","2","3"},
        {"4","5","6"},
        {"7","8","9"},
        {"+","0","-"},
        {"*","=","√"}};

    //Imprimir vector
    for(i=0; i<5; i++){
        for(j=0; j<3; j++){
            cout<<calc[i][j]<<" ";
        }
        cout<<endl;
    }

    return 0;
}

