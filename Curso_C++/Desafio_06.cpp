//Crie um Algoritmo em C++, em que o usuário informa os gastos
//com alimentação de 5 famílias calcula a média de gastos e diz de
//cada família, se seu gasto é abaixo, acima ou na média.

#include <iostream>

using namespace std;

int main()
{   
    float gastos[5];
    float medgastos;
    float total = 0;
    
    cout << "Desafio 6 - Curso C++\n\n";
    
    cout << "Digite o gasto da primeira familia: " << endl;
    cin >> gastos[0];
    
    cout << "Digite o gasto da segunda familia: " << endl;
    cin >> gastos[1];
    
    cout << "Digite o gasto da terceira familia: " << endl;
    cin >> gastos[2];
    
    cout << "Digite o gasto da quarta familia: " << endl;
    cin >> gastos[3];
    
    cout << "Digite o gasto da quinta familia: " << endl;
    cin >> gastos[4];
    
    for (int i = 0; i < 5; i++) {
        total += gastos[i];
    }
    
    medgastos = total / 5;
    
    cout << "\nA media de gastos entre as familias foi de R$: " << medgastos << "\n\n";
    
    for (int i = 0; i < 5; i++) {
        if (gastos[i] > medgastos) {
            cout << "A familia " << i + 1 << " gastou acima da media." << endl;
        } else if (gastos[i] < medgastos) {
            cout << "A familia " << i + 1 << " gastou abaixo da media." << endl;
        } else {
            cout << "A familia " << i + 1 << " gastou na media." << endl;
        }
    }

    return 0;
}
