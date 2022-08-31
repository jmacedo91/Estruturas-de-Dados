//Em um programa de moradia popular, somente pessoas maiores de 21 anos
//e com renda abaixo de R$1200,00 podem participar
//Crie um algoritmo em C++, em que o usuário informa sua idade e sua renda
// e é informado se ele pode ou não participar desse programa

#include <iostream>

using namespace std;

int main()
{   
    int idade;
    float renda;
    
    cout<< "Informe sua idade: \n";
    cin >> idade;
    
    cout << "Informe sua renda: \n";
    cin >> renda;
    
    if (idade > 21 && renda < 1200.00) {
        cout << "Você foi aprovado para participar do programa.\n";
    } else {
        cout << "Você não foi aprovado para participar do programa.\n";
    }

    return 0;
}