#include <iostream>
#include <algorithm>
using namespace std;

//Declaracion de funciones
int multiplicar_numeros_array();
int ordenarNumeros();


//Programa principal
int main(){

    int seleccion=0;
    char continuar='s';
    while (continuar=='s'||continuar=='S'){
        cout<<"Selecione uno de los siguientes programas"<<endl;
        cout<<"1 multiplicacion de los numeros de un array"<<endl;
        cout<<"2 ordenar una lista de numeros enteros"<<endl;

    
        cin>>seleccion;

        switch (seleccion){
            case 1: multiplicar_numeros_array();
            break;
            case 2: ordenarNumeros();
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

int ordenarNumeros(){
    int numeros[5];
    cout<<"Ingrese 5 numeros enteros"<<endl;

    for (size_t i = 0; i < (sizeof(numeros)/sizeof(numeros[0])); i++){
        cout<<"Ingrese el numero ("<<i+1<<")"<<endl;
        cin>>numeros[i];
    }


int contador2,contador1, aux;

for(contador1=0; contador1<4; contador1++){
	
	for(contador2=0; contador2<4-contador1; contador2++){
	
        if(numeros[contador2] > numeros[contador2+1]){
            aux=numeros[contador2];
            numeros[contador2]=numeros[contador2+1];
            numeros[contador2+1]=aux;
        }
	}
}


    cout<<"Los numeros son: "<<endl;
    for (size_t i = 0; i < (sizeof(numeros)/sizeof(numeros[0])); i++){
        cout<<numeros[i]<<" ";
    }
    
    return 0;
}
