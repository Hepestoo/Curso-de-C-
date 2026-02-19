#include <iostream>
using namespace std;

// int main(){
//     int edad = 21; //declara una variable de tipo int para almacenar la edad del usuario
//     if (edad >= 18)
//     {
//         cout << "Eres mayor de edad" << endl; //imprime en pantalla un mensaje indicando que el usuario es mayor de edad
//     }else{
//         cout << "Eres menor de edad" << endl; //imprime en pantalla un mensaje indicando que el usuario es menor de edad
//     }

//     int nota = 85;
//     if (nota >= 90)
//     {
//         cout << "Excelente" << endl;
//     }else if (nota >= 70)
//     {
//         cout << "Aprobado" << endl;
//     }else{
//         cout << "Reprobado" << endl;
//     }
    
//     bool tieneIdentificacion = true;
//     if (edad >= 18 && tieneIdentificacion)
//     {
//         cout << "Puedes entrar al club de la pelea" << endl;
//     }else{
//         cout << "No puedes entrar al club de la pelea" << endl;
//     }

//     int hora= 14;
//     if (hora >= 6 && hora < 12)
//     {
//         cout << "Buenos días" << endl;
//     }else if (hora >= 12 && hora < 18)
//     {
//         cout << "Buenas tardes" << endl;
//     }else{
//         cout << "Buenas noches" << endl;
//     }   
    
//     return 0; //indica que el programa terminó correctamente
// }



// /*EJERCICIOS EN CLASE
// - Escribe un programa que pida la temperatura y diga si hace frio (menos de 15), esta  templado (entre 15 y 25), o hace calor (mas de 25)
// -Extiende el programa para dar sugerencias: sueter para frio, sombrero si hace calor o nada si esta templado
// -Crea un programa que pida dos numeros y diga cual es mayor, menor o so son iguales
// */

int main(){
    int temperatura =20;
    if (temperatura >= 25 )
    {
        cout << "Hace calor, ponte sombrero crack" << endl;
    }else if (temperatura >= 15 && temperatura < 25)
    {
        cout << "Esta templado, no necesitas usar nada para salir" << endl;
    }else{
        cout << "Hace frio, ponte un sueter pal frio" << endl;
    }
    
    int num1= 30;
    int num2= 30;
    if (num1 > num2)
    {
        cout << num1 << " es el numero mayor y " << num2 << " es el numero menor" << endl;
    }else if (num2 > num1)
    {
        cout << num2 << " es el numero mayor y " << num1 << " es el numero menor" << endl;
    }else{
        cout << "Los numeros son iguales" << endl;
    }
       

    return 0; //indica que el programa terminó correctamente
}