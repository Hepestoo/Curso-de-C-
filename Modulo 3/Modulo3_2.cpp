#include <iostream>
using namespace std;

// int main() 
// {  
//     int opcion = 2;
//     switch (opcion)
//     {
//     case 1:
//         cout << "Seleccionaste la opcion 1" << endl;
//         break;
    
//     case 2:
//         cout << "Seleccionaste la opcion 2" << endl;
//         break;
//     case 3:
//         cout << "Seleccionaste la opcion 3" << endl;
//         break;    
//     default:
//         cout << "No seleccionaste una opcion valida" << endl;
//     }


//     char opcionChar = 'b';
//     switch (opcionChar)
//     {
//     case 'a':
//         cout << "Seleccionaste la opcion a" << endl;
//         break;
//     case 'b':
//         cout << "Seleccionaste la opcion b" << endl;
//         break;
//     case 'c':
//         cout << "Seleccionaste la opcion c" << endl;
//         break;    
//     default:
//         cout << "No seleccionaste una opcion valida" << endl;
//     }
    
//     int dia = 3;
//     switch (dia)
//     {
//     case 1:
//         cout << "Seleccionaste el dia 1" << endl;
//         break;
//     case 2:
//         cout << "Seleccionaste el dia 2" << endl;
//         break;
//     case 3:
//         cout << "Seleccionaste el dia 3" << endl;
//         break;
//     default:
//         cout << "No seleccionaste un dia valido" << endl;
//     }

//     return 0; //indica que el programa terminó correctamente
// }

// /*EJERCICIOS EN CLASE
// - Crea un menu interactivo con switch-case que permita al usuario seleccionar entre 4 operaciones matematicas: suma, resta, multiplicacion, division
// - Pide dos numeros  y muestra el resultado correspondiente
// - Agrega una opcion de salir que termine el programa 
// */

int main(){
    int opcion = 'suma';
    switch (opcion)
    {
    case 'suma':
        cout << "Selecccionaste la opcion suma" << endl;
        break;
    case 'resta':
        cout << "Seleccionaste la opcion resta" << endl;
        break;
    case 'multiplicacion':
        cout << "Seleccionaste la opcion multiplicacion" << endl;
        break;
    case 'division':
        cout << "Seleccionaste la opcion division" << endl;
        break;
    default:
        cout << "No seleccionaste una opcion valida" << endl;
        break;
    }


    int num1 = 5;
    int num2 = 6;
    int resultado = num1 + num2;
    cout << "El resultado de la suma es: " << resultado << endl;

    int salir = 1;
    switch (salir)
    {
    case 1:
        cout << "Saliendo del programa..." << endl;
        break;
    default:
        cout << "Opción no válida" << endl;
        break;
    }
}