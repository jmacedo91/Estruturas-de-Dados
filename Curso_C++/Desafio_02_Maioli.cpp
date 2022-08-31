#include <iostream>

using namespace std;

int main()
{   
    float n1, n2, n3, medturma;
    
    cout << "Digite a nota 1: " << endl;
    cin >> n1;
    
    cout << "Digite a nota 2: " << endl;
    cin >> n2;
    
    cout << "Digite a nota 3: " << endl;
    cin >> n3;
    
    cout << "Digite a media da turma: " << endl;
    cin >> medturma;
    
    float mediaaluno = (n1+n2+n3)/3;
    cout << "A media final do aluno e: " << mediaaluno << endl;
    
    if (mediaaluno < medturma) {
        cout << "O aluno esta abaixo da media." << endl;
    } else if (mediaaluno == medturma) {
        cout << "O aluno esta na media." << endl;
    } else {
        cout << "O aluno esta na media." << endl;
    }

    return 0;
}