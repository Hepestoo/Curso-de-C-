#include <iostream> 
using namespace std;

// //Funcion que suma dos numeros
// int suma(int a, int b){
//     return a + b;
// }

// //Funcion que calcula el promedio de tres numeros
// float promedio(float a, float b, float c){
//     return (a + b + c) / 3;
// }

// //Funcion que verifica si un numero es par
// bool esPar(int numero){
//     return numero % 2 == 0;
// }

// int main(){
//     //Llamada a la funcion suma
//     int resultado = suma(5,7);
//     cout << "La suma es: " << resultado << endl;
    
//     //Llamada a la funcion promedio
//     float x = 2.5, y = 7.69, z = 56.890;
//     cout << "Promedio: " << promedio(x,y,z) << endl;

//     //Llamada a la funcion esPar
//     int n =35;
//     if (esPar(n)){
//         cout << n << " es par" << endl;
//     } else {
//         cout << n << " es impar" << endl;   
//     }

//     return 0;
// }


// /*
// EJERCICIOS EN CLASE
// -Crea una funcion que reciba tres numeros y devuelva el mayor
// -Otra que reciba dos numeros y devuelva el resultado de dividir el primero entre el segundo, validando que el divisor no sea cero
// */

//Funcion mayor
int mayor(int a, int b, int c){
    if (a > b && a > c)
    {
        return a;
    }else if (b > a && b > c)
    {
        return b;
    } else {
        return c;
    }
}

//FUncion division
float division(float a, float b){
    if (b == 0)
    {
        cout << "Error: No se puede dividir entre cero" << endl;
    } else {
        return a / b;
    }
    
}




int main(){
    //Funcion para devolver mayor
    int resultado = mayor(5, 7, 3);
    cout << "El mayor es: " << resultado << endl;

    //Funcion para division
    float resultadoDivision = division(10, 2);
    cout << "El resultado de la division es: " << resultadoDivision << endl;

    return 0;
}