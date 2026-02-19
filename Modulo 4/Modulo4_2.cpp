#include <iostream>
using namespace std;

// int main(){
//     int matriz [3][3] = {
//         {1, 2, 3},
//         {4, 5, 6},
//         {7, 8, 9}
//     };

//     for (int i = 0; i < 3; i++)
//     {
//         for (int j = 0; j < 3; j++)
//         {
//             cout << matriz[i][j] << " ";
//         }
//         cout << endl; // Imprime una nueva línea después de cada fila
//     }

//     matriz[1][2] = 100;

//     //Sumar todos los elementos de una matriz
//     int suma = 0;
//     for (int i = 0; i < 3; i++){
//         for (int j = 0; j < 3; j++){
//             suma += matriz[i][j];
//         }
//     }
//     cout << "La suma de todos los elementos es: " << suma << endl;

//     return 0;
    
// }


/*EJERCICIO EN CLASE
- Llena una matriz 3x3 con valoress que el usuario proporcione
- Imprime su diagonal principal
- Crea una nueva matriz transpuesta e imprimela
*/

int main(){
    const int SIZE = 3;
    int matriz[SIZE][SIZE];

    cout << "Ingresa los valores para la matriz 3x3:" << endl;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            cout << "Elemento [" << i << "][" << j << "]: ";
            cin >> matriz[i][j];
        }
    }

    cout << "Diagonal principal: ";
    for (int i = 0; i < SIZE; i++){
        cout << matriz[i][i] << " ";
    }
    cout << endl;

    int transpuesta[SIZE][SIZE];
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            transpuesta[j][i] = matriz[i][j];
        }
    }
    
    cout << "Matriz transpuesta:" << endl;
    for (int i = 0; i < SIZE; i++){
        for (int j = 0; j < SIZE; j++){
            cout << transpuesta[i][j] << " ";
        }
        cout << endl;
    }

    return 0;
}