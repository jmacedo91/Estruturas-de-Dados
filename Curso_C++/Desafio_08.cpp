//Crie um algoritmo em C++, que o usuário informa o tamanho de um vetor,
//e seus elementos. O algoritmo deve imprimir este vetor e logo após,
//perguntar ao usuario se ele quer imprimir outro vetor.
//Utilize o delete após impressão do vetor.

#include <iostream>

using namespace std;

int main()
{   
    int opcao;
    
    do {
        
        int tamanho;
        cout << "Digite o tamanho do vetor: \n";
        cin >> tamanho;
        
        int* vet = new int[tamanho];
        
        
        for (int i = 0; i < tamanho; i++) {
            cout << "Digite o elemento " << i << ".\n";
            cin >> vet[i];
        }
        
        cout << "Este é o vetor: \n";
        cout << "[ ";
        for (int i = 0; i < tamanho; i++) {
            cout << vet[i] << " ";
        }
        cout << "] \n";
        
        delete [] vet;
        
        cout << "Digite 0 para parar o programa ou 1 para criar outro vetor.\n";
        cin >> opcao;
        
    } while (opcao != 0);

    return 0;
}