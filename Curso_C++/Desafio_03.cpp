//Crie um algoritmo em C++, que tenha uma função 
// que calcula o fatorial de um número inteiro positivo,
// informado pelo usuário.

#include <iostream>

using namespace std;

int fact(int number) {

    int factorial;
    factorial = 1;
    if (number <= 1) {} else {
        for (int x = 0; x < number; x++) {
            factorial *= (number - x);
        }
    }

    return factorial;
}

int main() {
    int number;
    cout << "Digite um numero inteiro positivo: " << endl;
    cin >> number;
    
    cout << "O fatorial de " << number << " e " << fact(number) << "." << endl;

    system("pause");
}