#include <iostream>
#include <vector>

using namespace std;

int main(){

    string nombres[5]={"Carlos","Daniel","Luisa","Simon","Christian"};
    string nombres2[5];

    //for(int i=0; i <= 5; i++){
        //cout<<" "<<nombres2[k]<<endl;//



    for(int j=0; j<=nombres2->length();j++){
    cout<<"Ingrese los nombres para el arreglo: ";
    string name;
    cin>>name; // o cin>>nombres2[j]
    nombres2[j] = name; 
    }

    for(int k=0; k <= nombres2->length(); k++){

        cout<<nombres2[k]<<endl;
    }
    

    return 0;
}