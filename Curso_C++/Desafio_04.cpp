//Crie uma função que calcula a potência B^e , em que o usuário informa 
//um número real B e um número natural e. Nesse algoritmo, sempre que é
//informado o resultado da potência, é perguntado ao usuário, se este deseja
//calcular outra potência.

#include <iostream>

using namespace std;

float potencia() {
    float b;
    int e;
    float result;
    result = 1;
    
    cout << "Digite uma base real: ";
    cin >> b;
    
    cout << "Digite um expoente natural: ";
    cin >> e;
    
    for (int x = 1; x <= e; x++) {
        if (e == 0) {
            return result;
        } else {
            result *= b;
        }
    }
    return result;
}

int main()
{   
    bool continue_calc;
    continue_calc = true;
    
    while (continue_calc) {
        int opcao;
        cout << "Deseja calcular a potencia de um numero? (1) para sim (0) para não " << endl;
        cin >> opcao;
        
        if (opcao == 1) {
            float resultado = potencia();
            cout << "O resultado da potencia e: " << resultado << "." << endl;
        } else {
            cout << "Até mais." << endl;
            continue_calc = false;
        }
        
    }

    return 0;
}