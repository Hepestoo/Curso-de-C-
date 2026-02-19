#include <iostream>
using namespace std;

// int main(){
//     int x = 10;
//     int* p = &x; // ptr es un puntero que almacena la dirección
//     cout << *p << endl; // Imprime el valor de x a través del puntero

//     *p = 20; // Modifica el valor de x a través del puntero
//     cout << x << endl; // Imprime el nuevo valor de x

//     //Puntero a char
//     char letra = 'A';
//     char* ptr = &letra; // ptrLetra es un puntero
//     cout << *ptr << endl; // Imprime el valor de letra a través del puntero

//     //Punteros y arreglos
//     int nums[] = {1, 2, 3, 4, 5};
//     int* ptr2 = nums;
//     cout << *(ptr2 + 1) << endl; // Imprime el primer elemento del arreglo

//     return 0;
// }

/*
EJERCICIOS EN CLASE
- Declara dos variables enteras y apunta a ellas con punteros
- Intercambia sus variables usando  solo los punteros
- Imprime sus valores antes y despues
-*/

int main (){
    int a = 5, b = 10;
    int* ptrA = &a;
    int* ptrB = &b;

    cout << "Antes del intercambio: a = " << a << ", b = " << b << endl;

    // Intercambio usando punteros
    int temp = *ptrA; // Guarda el valor de a
    *ptrA = *ptrB;    // Asigna el valor de b a a
    *ptrB = temp;     // Asigna el valor guardado (original de a) a b

    cout << "Después del intercambio: a = " << a << ", b = " << b << endl;

    return 0;
}