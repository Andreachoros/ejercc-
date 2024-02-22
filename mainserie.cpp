
#include <iostream>

using namespace std;


void fibonacci(int n) {
    int a = 0, b = 1;
    cout << "Serie de Fibonacci hasta el término " << n << ": ";
    for (int i = 0; i < n; ++i) {
        cout << a << " ";
        int temp = a;
        a = b;
        b = temp + b;
    }
    cout << endl;
}

int main() {
    int numer_terminos;


    cout << "Ingrese el número de términos de la serie de Fibonacci: ";
    cin >> numer_terminos;


    if (numer_terminos <= 0) {
        cout << "El número de términos debe ser mayor que cero." << endl;
    } else {

        fibonacci(numer_terminos);
    }

    return 0;
}