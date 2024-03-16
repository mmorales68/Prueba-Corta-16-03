#include <iostream>
#include <vector> // Colocamos para hacer vectores en el codigo

using namespace std;

int main() {

    vector<int> vectordenumeros = {1, 4, 6, 8, 10}; // Colocamos un radio en el vector de cuales numeros si estan en el

    int BuscarVector;
    cout << "Bienvenido al programa que busca en el vector los numeros que si estan en el" << endl;
    cout << "Ingrese un numero para buscar en el vector: ";
    cin >> BuscarVector;

    // Aquí buscamos el número en el vector para ver si realmente esta presente
    int localidad = -1; // Lo colocamos como -1 para afirmar que no se encontró el numero que se ingreso
    for (int i = 0; i < vectordenumeros.size(); i++) { // Si i es igual a 0 entonces de por sí el tamaño del vector es -1, la i se incrementa en el mismo bucle
        if (vectordenumeros[i] == BuscarVector) { // Se busca en el vector que hemos hecho si el número que colocamos realmente está en el vector que colocamos
            localidad = i; // En la variable se confirma que sí está localizado, se coloca en el comando de localidad
            break; // Cortamos el bucle
        }
    }
    
    if (localidad != -1) {
        cout << "El numero " << BuscarVector << " esta presente en el vector en la posicion " << localidad << endl;
    } else {
        cout << "El numero " << BuscarVector << " no esta presente en el vector" << endl;
    }
// Dictaminamos si esta o no esta el numero concluido y cerramos el codigo
    return 0;
}