#include <iostream> 
using namespace std;

int sumar (int a, int b){return a + b;}
int restar (int a, int b){return a - b;}
int multiplicar (int a, int b){return a * b;}
int dividir (int a, int b){
    if (b != 0) return a /b;
    else {
        cout << "Error: No se puede dividir por cero" << endl;
        return 0;
    }   
}

int potencia (int base, int exponente){
    int resultado = 1;
    for (int i = 1; i <= exponente; i++)
    {
        resultado *= base;
    }
    return resultado; 
}

int main(){
    int opcion, num1, num2;

    do
    {
        cout << "\nCalculadora\n";
        cout << "1. Sumar\n2. Restar\n3. Multiplicar\n4. Dividir\n5. Potencia\n6. Salir\n";
        cout << "Seleccione una opcion: ";
        cin >> opcion;

        if (opcion >= 1 && opcion <= 5)
        {
            cout << "Ingrese dos numeros: ";
            cin >> num1 >> num2;
        }

        switch (opcion)
        {
        case 1:
            cout << "Resultado: " << sumar(num1, num2) << endl;
            break;
        case 2:
            cout << "Resultado: " << restar(num1, num2) << endl;
            break;
        case 3:
            cout << "Resultado: " << multiplicar(num1, num2) << endl;
            break;
        case 4:
            cout << "Resultado: " << dividir(num1, num2) << endl;
            break;
        case 5:
            cout << "Resultado: " << potencia(num1, num2) << endl;
            break;
        default:
            cout << "Ocion invalida" << endl;
            break;
        }
        
    } while (opcion != 6);

    return 0;
    
}


/*
EJERCICIO EN CLASE
- Agrega una funcion potencial (int base, int exponente)  que calcule una potencia usando un bucle for
- Agrega esta funcion al menu de la calculadora
*/