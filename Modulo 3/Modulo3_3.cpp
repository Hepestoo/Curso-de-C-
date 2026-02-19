#include <iostream>
using namespace std;

// int main(){
//     //FOR: Contar del 1 al 5
//     cout << "Ciclo for: Contar del 1 al 5\n";
//     for (int i = 1; i <= 5; i++)
//     {
//         cout << i << endl;
//     }
    
//     cout << endl;

//     //FOR con continue: mostrar del 1 al 5, excepto el 3
//     cout << "Ciclo for con con continue (se omite el 3)\n";
//     for (int i = 1; i <= 5; i++)
//     {
//         if (i == 3) continue; // Salta el número 3
//         cout << i << endl;
//     }
    
//     cout << endl;

//     //FOR con break: detener al llegar al 4
//     cout << "Ciclo for con break (se detiene en 4)\n";
//     for (int i = 1; i <= 5; i++)
//     {
//         if (i == 4)break;
//         cout << i << endl;
//     }
    
//     cout << endl;


//     //WHILE: Contar del 1 al 5
//     cout << "Ciclo while: Contar del 1 al 5\n";
//     int j = 1;
//     while (j <= 5)    {
//         cout << j << endl;
//         j++;
//     }

//     cout << endl;

//     //WHILE con break: detener cuando el numero sea igual a 3
//     cout << "Ciclo while con break ( se detiene al llegar a 3)\n";
//     int k = 1;
//     while (k <= 5)
//     {
//         if(k == 3 )break;
//         cout << k << endl;
//         k++;
//     }

//     cout << endl;

//     //DO-WHILE: Contar del 1 al 5
//     cout << "Ciclo do while: contar del 1 al 5\n";
//     int x = 1;
//     do
//     {
//         cout << x << endl;
//         x++;
//     } while (x <= 5);

//     cout << endl;
    
//     //DO-WHILE con continue: omitir el numero 2
//     cout << "Ciclo do-while con continue (se omite el 2)\n";
//     int y = 1;
//     do
//     {
//         if (y == 2)
//         {
//           y++;
//           continue;
//         }
//         cout << y << endl;
//         y++;
//     } while (y <= 4);
    
    
//     return 0;
// }

// /*
// EJERCICIOS EN CLASE:
// -Pide al usuario dos numeros (inicio y fin) y muestra todos los numeros pares entre ellos
// -Usa continue para saltas los impares
// -Cuenta cuantos pares se imprimieron
// -Haz un programa que imprima la tabla de multiplicar del numero que el usuario elija
// */

int main(){
    int inicio = 3;
    int fin = 15;
    int contadorPares = 1;
    for (int i = inicio; i <= fin; i++)
    {
        if (i % 2 != 0) continue; // Si el número es impar, se salta la iteración
        cout << i << endl;
        contadorPares++;
    }
    cout << "Se imprimieron " << contadorPares << " numeros pares." << endl;
    

    int numero;
    cout << "Ingrese un numero para mostrar su tabla de multiplicar: ";
    cin >> numero;
    cout << "Tabla de multiplicar del " << numero << ":\n";
    for (int i = 1; i <= 10; i++){
        cout << numero << " x " << i << " = " << numero * i << endl;    
    }

        return 0;
}