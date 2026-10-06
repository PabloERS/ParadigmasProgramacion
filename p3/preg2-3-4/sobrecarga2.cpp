#include <iostream>
using namespace std;

void mostrar(int x){
    cout << "Entero: " << x << endl;
}

void mostrar(int x, int y){
    cout << "Dos enteros: " << x << " y " << y << endl;
}

void mostrar(double x){
    cout << "Decimal: " << x << endl;
}

int main(){
    mostrar(5);
    mostrar(10, 20);
    mostrar(3.14);

    return 0;
}