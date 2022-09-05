#include <iostream>
#include "fila.cpp"

using namespace std;

int main() {
    fila fila1;
    int opcao;
    TipoItem item;
    cout << "********** Programa Gerador de Filas **********\n\n";

    do {
        cout << "Digite 0 para parar o programa!\n";
        cout << "Digite 1 para inserir um elemento!\n";
        cout << "Digite 2 para remover um elemento!\n";
        cout << "Digite 3 imprimir a fila!\n";
        cin >> opcao;

        if (opcao == 1) {
            cout << "Digite o elemento a ser inserido na fila: \n";
            cin >> item;
            fila1.inserir(item);
        } else if (opcao == 2) {
            item = fila1.remover();
            cout << "O elemento removido e: " << item << endl;
        } else if (opcao == 3) {
            fila1.imprimir();
        }
    } while (opcao != 0);

    return 0;
}
