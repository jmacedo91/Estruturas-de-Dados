#include <iostream>

using namespace std;

float potencia(float x, int y){
    float pot = 1;
    int cont = 1;
    while (cont <= y) {
        pot *= x;
        cont++;
    }
    return pot;
}

int main()
{   
    float b;
    int e;
    while (1) {
        cout << "Digite a base (numero real): " << endl;
        cin >> b;
        
        cout << "Digite o expoente (numero natural): " << endl;
        cin >> e;
        
        float respot = potencia(b, e);
        cout << "O resultado de " << b << " elevado a " << e << " e igual a " << respot << endl;
        
        int q;
        cout << "Digite 1 se deseja calcular outra potência ou 0 se não deseja." << endl;
        cin >> q;
        
        if (q == 0) {
            break;
        }
    }
    
    return 0;
}