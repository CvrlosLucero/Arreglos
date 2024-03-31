#include <iostream>

using namespace std;

int main(){
    //declarar variables y vector
    string triki[3][3];
    string ficha;

    //llenar vector
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<"Pon X o O para la posición "<<"("<<i<<","<<j<<")"<<endl;
                cin>>ficha;
            triki[i][j] = ficha;
        }
    }

    //imprimir vector
    for(int i=0; i<3; i++){
        for(int j=0; j<3; j++){
            cout<<triki[i][j]<<" ";
        }
        cout<<endl;
    }
    
    return 0;
}