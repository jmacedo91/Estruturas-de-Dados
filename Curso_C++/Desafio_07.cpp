//Crie um algoritmo em C++, em que o usuário informa a dimensão
//de uma matriz, e os elementos de duas matrizes (ambas com a mesma dimensão)
//e o Algoritmo mostra a soma entre estas duas matrizes.

#include <iostream>

using namespace std;

int main()
{
    int linhas;
    int colunas;
    
    cout << "Digite o número de linhas que voce deseja nas matrizes: " << endl;
    cin >> linhas;
    
    cout << "Digite o número de colunas que voce deseja nas matrizes: " << endl;
    cin >> colunas;
    
    int matriz1[linhas][colunas];
    int matriz2[linhas][colunas];
    int matrizsoma[linhas][colunas];
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Digite o valor do elemento da linha " << i << " e coluna " << j << " da primeira matriz\n";
            cin >> matriz1[i][j];
        }
    }
    
    cout << "Esta e a primeira matriz" << endl;
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz1[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Vamos para a segunda matriz" << endl;
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << "Digite o valor do elemento da linha " << i << " e coluna " << j << " da segunda matriz\n";
            cin >> matriz2[i][j];
        }
    }
    
    cout << "Esta e a segunda matriz" << endl;
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matriz2[i][j] << " ";
        }
        cout << endl;
    }
    
    cout << "Esta é a soma das duas matrizes" << endl;
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            matrizsoma[i][j] = matriz1[i][j] + matriz2[i][j];
        }
    }
    
    for (int i = 0; i < linhas; i++) {
        for (int j = 0; j < colunas; j++) {
            cout << matrizsoma[i][j] << " ";
        }
        cout << endl;
    }
    
    return 0;
}