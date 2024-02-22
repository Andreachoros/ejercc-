
#include <iostream>

using namespace std;


unsigned long long factorial(int n) {
    if (n == 0 || n == 1)
        return 1;
    else
        return n * factorial(n - 1);
}

int main() {
    int numero;


    cout << "Ingrese un número entero positivo: ";
    cin >> numero;


    if (numero < 0) {
        cout << "No se puede calcular el factorial de un número negativo." << endl;
    } else {

        unsigned long long fact = factorial(numero);
        cout << "El factorial de " << numero << " es: " << fact << endl;
    }

    return 0;
}
