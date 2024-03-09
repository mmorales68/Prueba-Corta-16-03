#include <iostream>
using namespace std;

//Declaracion de funciones
int multiplicar_numeros_array();



//Programa principal
int main(){

    int seleccion=0;
    char continuar='s';
    while (continuar=='s'||continuar=='S'){
        cout<<"Selecione uno de los siguientes programas"<<endl;
        cout<<"1 multiplicacion de los numeros de un array"<<endl;
    
        cin>>seleccion;

        switch (seleccion){
            case 1: multiplicar_numeros_array();
            break;
            default: cout<<"No se ingreso una opcion valida"<<endl;
            break;
        }

        cout<<endl<<"Continuar seleccionado uno de los programas (s/n)"<<endl;
        cin>>continuar;
    }


    return 0;
}



//Definicion de funciones
int multiplicar_numeros_array(){
    
    int numeros[]={1,1,5,10,2,4};
    int resultado=0;

    for (size_t i = 0; i < (sizeof(numeros)/sizeof(numeros[0])); i++){
        if (i==0){
            resultado=numeros[i];
        }else{
            cout<<resultado<<"*"<<numeros[i];
            resultado=resultado*numeros[i];
            cout<<"="<<resultado<<endl;
        }
    }
    cout<<"El resultado es: "<<resultado;
    return 0;
}