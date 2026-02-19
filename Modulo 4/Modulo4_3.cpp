# include <iostream>
#include <string>
using namespace std;

// int main(){
//     char saludo[] = "Hola";
//     cout << saludo << endl; // Imprime "Hola"

//      char saludo2[5] = {'H', 'o', 'l', 'a', '\0'}; // El cero indica el fiunal de la cadena, sino el programa no sabra donde termina el arreglo

//     string nombre = "Ana";
//     nombre += " Maria"; // Concatenar cadenas
//     cout << nombre << endl; // Imprime "AnaMaria"
//     cout << nombre.length() << endl; // Imprime la longitud de la cadena (9)
//     cout << nombre[1] << endl; // Imprime el primer caracter de la cadena (n)
    
//     if (nombre == "Ana Maria")
//     {
//        cout << "El nombre es Ana Maria" << endl;
//     }
    
//     return 0;
// }


/*
EJERCICIOS EN CLASE
- Leer una frase completa
- Contar cuantas vacales contiene
- Reemplazar todos los espacios por guiones y mostrar la frase modificada
*/

int main(){
    string frase;
    cout << "Ingresa una frase: ";
    getline(cin, frase); // Leer una línea completa de texto

    int contadorVocales = 0;
    for (char c : frase)
    {
        if (c == 'a' || c == 'e' || c == 'i' || c == 'o' || c == 'u' ||
            c == 'A' || c == 'E' || c == 'I' || c == 'O' || c == 'U')
        {
            contadorVocales++;
        }
    }

    cout << "La frase contiene " << contadorVocales << " vocales." << endl;

    for (char& c : frase)
    {
        if (c == ' ')
        {
            c = '-'; // Reemplazar espacios por guiones
        }
    }

    cout << "Frase modificada: " << frase << endl;

    return 0;
}