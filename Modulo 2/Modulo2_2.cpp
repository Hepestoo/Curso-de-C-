#include <iostream>
using namespace std;

int main() 
{  
    string name; //declara una variable de tipo string para almacenar el nombre del usuario
    int edad; //declara una variable de tipo int para almacenar la edad del usuario
    cout << "Ingrese su nombre: "; //solicita al usuario que ingrese su nombre
    cin >> name;

    cout << "Ingrese su edad: "; //solicita al usuario que ingrese su edad
    cin >> edad;

    cout <<"Hola, " << name << ", Tienes" << edad << " anos, eres un cachondo" << endl; //imprime en pantalla un mensaje personalizado con el nombre y la edad del usuario
    
    return 0; //indica que el programa terminó correctamente
}