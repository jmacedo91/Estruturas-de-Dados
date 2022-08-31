// Crie um algoritmo em C++, em que o usuário informa
// as notas de três provas de um determinado aluno e também
// a média de nota da turma toda. O Algoritmo deve calcular a
// média deste aluno e informar se sua nota é acima da média, abaixo ou está na média.

#include <iostream>

using namespace std;
 
int main() {
    float n1;
    float n2;
    float n3;
    float media_final;

    cout << "Digite a  primeira nota: " << endl;
    cin >> n1;

    cout << "Digite a  segunda nota: " << endl;
    cin >> n2;

    cout << "Digite a  terceira nota: " << endl;
    cin >> n3;

    media_final = (n1 + n2 + n3) / 3;

    if (media_final < 5) {
        cout << "Reprovado. Voce ficou abaixo da media.";
    } else if (media_final == 5) {
        cout << "Aprovado. Voce obteve exatamente o valor da media.";
    } else {
        cout << "Aprovado. Voce esta acima da media.";
    }
    return 0;
};
