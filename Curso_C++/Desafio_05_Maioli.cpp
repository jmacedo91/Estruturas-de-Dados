#include <iostream>

using namespace std;

int main()
{   
    float renda;
    int idade;
    
    cout << "Qual é a sua idade? " << endl; 
    cin >> idade;
    
    cout << "Qual é a sua renda? " << endl;
    cin >> renda;
    
    if (idade >= 21 && renda < 1200) {
        cout << "Você está apto a participar do programa." << endl;
    } else {
        cout << "Você não pode participar do programa." << endl;
    }

    return 0;
}