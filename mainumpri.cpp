
#include <iostream>

using namespace std;


bool esnPrimo(int num) {
    if (num <= 1) {
        return false;
    }
    for (int i = 2; i * i <= num; ++i) {
        if (num % i == 0) {
            return false;
        }
    }
    return true;
}

int main() {
    int numeroP;


    cout << "Ingrese un número  positivo: ";
    cin >> numeroP;


    if (esnPrimo(numeroP)) {
        cout << numeroP << " Es un número primo." << endl;
    } else {
        cout << numeroP << " No es un número primo." << endl;
    }

    return 0;
}