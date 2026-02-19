#include <iostream>
using namespace std;

// int main(){
//     int numeros[5] = {10, 20, 30, 40, 50};
//     cout << numeros[0] << endl; // Imprime el primer elemento del arreglo (10)

//     numeros[2] = 35; // Modifica el tercer elemento del arreglo

//     int edades[3];
//     edades[0] = 25; // Asigna un valor al primer elemento del arreglo
//     edades[1] = 30; // Asigna un valor al segundo elemento del arreglo
//     edades[2] = 35; // Asigna un valor al tercer elemento del arreglo

//     //Imprimir los valores del arreglo numeros
//     for (int i = 0; i < 5; i++)
//     {
//         cout << "Elemento " << i << ": " << numeros[i] << endl;
//     }

//     //Tambien  puedes declarar variables de otros tipos
//     char vocales[5] = {'a', 'e', 'i', 'o', 'u'};
//     bool respuestas[3] = {true, false, true};
    

//     return 0;
// }


/*
EJERCICIOS EN CLASE
- Solicita al usuario que ingrese 10 numeros y guardarlos en un arreglo 
- Calcula e imprime el promedio de los valores
- Encuentra e imprime el valor mayor y menor
*/

int main (){
    const int SIZE = 10;
    int numeros[SIZE];
    int suma = 0;
    int mayor, menor;

    cout << "Ingresa " << SIZE << " numeros:" << endl;
    for (int i = 0; i < SIZE; i++)
    {
        cout << "Numero " << (i + 1) << ": ";
        cin >> numeros[i];
        suma += numeros[i];

        if (i == 0) {
            mayor = menor = numeros[i]; // Inicializa mayor y menor con el primer número
        } else {
            if (numeros[i] > mayor) {
                mayor = numeros[i]; // Actualiza el valor mayor
            }
            if (numeros[i] < menor) {
                menor = numeros[i]; // Actualiza el valor menor
            }
        }
    }

    double promedio = static_cast<double>(suma) / SIZE; // Calcula el promedio

    cout << "El promedio es: " << promedio << endl;
    cout << "El numero mayor es: " << mayor << endl;
    cout << "El numero menor es: " << menor << endl;

    return 0;
}