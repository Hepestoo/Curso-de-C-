#include <iostream>
using namespace std;

// //Funcion definida antes del main
// void saludar(){
//     cout << "Hola desde una funcion fuera del main" << endl;
// }

// //Declaracion de funcion antes del main
// void imprimirMensaje();



// int main(){
//     saludar();
//     saludar();

//     imprimirMensaje();

//     return 0;
// }

// //Declaracion de la funcion despues del main
// void imprimirMensaje(){
//     cout << "Hola desde una funcion declarada" << endl;
// }

// /*
// EJERCICIOS EN CLASE
// -Escribe una funcion mostrarMenu() que imprima un menu con opciones
// -Escribe otra funcion saludoPersonalizado(String nombre) que salude al usuario por su nombre
// -Llama ambas funciones desde el main
// */

int main(){
    mostrarMenu();
    saludoPersonalizado("Juan");
    return 0;
}

void mostrarMenu(){
    cout << "Menu de opciones:\n";
    cout << "1. Opcion 1\n";
    cout << "2. Opcion 2\n";
    cout << "3. Opcion 3\n";
}

void saludoPersonalizado(string nombre){
    cout << "Hola " << nombre << ", bienvenido" << endl;
}