#include <iostream>
using namespace std;

// void duplicarElementos(int* arr, int tam){
//     for (int i = 0; i < tam; i++)
//     {
//         arr[i] *= 2;
//     }
    
// }

// int main(){
//     int numeros[] = {1, 2, 3, 4, 5};
//     duplicarElementos(numeros, 5);
//     for (int i = 0; i < 5; i++)
//     {
//         cout << numeros[i] << " ";
//     }
    
//     return 0;
// }

// //Tambien podemos manipular cadenas con punteros
// void mostrarLetras( const char* str){
//     while (*str != '\0')
//     {
//         cout << *str << endl;
//         str++;
//     }
    
// }

/*
EJERCICIOS EN CLASE
- Escribe una funcion  que recibe un arreglo de enteros y su tamaño
- Ordena el arreglo de menor a mayor (algoritmo burbuja)
- Imprime el arrego antes y despues de ordenarlo
- Usa punteros en todas las funciones para manipular directamente los valores
*/


void ordenarBurbuja(int* arr, int tam){
    for (int i = 0; i < tam - 1; i++)
    {
        for (int j = 0; j < tam - i - 1; j++)
        {
            if (arr[j] > arr[j + 1])
            {
                // Intercambiar arr[j] y arr[j + 1]
                int temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
}

int main(){
    const int SIZE = 5;
    int numeros[SIZE] = {64, 34, 25, 12, 22};

    cout << "Arreglo original: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    ordenarBurbuja(numeros, SIZE);

    cout << "Arreglo ordenado: ";
    for (int i = 0; i < SIZE; i++)
    {
        cout << numeros[i] << " ";
    }
    cout << endl;

    return 0;
}

