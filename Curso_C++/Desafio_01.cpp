// Dada a função f(x) = x^2 - 3x + 5

// Crie um algoritmo em C++, 
// que tenha uma função que calcula o valor de f(a), em que 'a'
// é um número real informado pelo usuário

#include <iostream>
#include <math.h>

using namespace std;

int main() {
    int x;
    cout << "Digite o valor de x: ";
    cin >> x;

    int f;
    f = pow(x, 2) - 3*x + 5;

    cout << "O valor de f(x) e: " << f << "." << endl;

}