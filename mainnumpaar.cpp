#include <iostream>

using namespace std;

int main() {
    int numeroP;


    cout << "Ingrese un número entero: ";
    cin >> numeroP;


    if (numeroP % 2 == 0) {
        cout << "El número " << numeroP << " es par." << endl;
    } else {
        cout << "El número " << numeroP << " no es par." << endl;
    }

    return 0;
}