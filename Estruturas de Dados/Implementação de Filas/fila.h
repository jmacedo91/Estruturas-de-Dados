//fila = queue
typedef int TipoItem;
const int max_itens = 100;

class fila {
    private:
    int primeiro, ultimo;
    TipoItem* estrutura;

    public:
    fila(); // construtor
    ~fila(); // destrutor
    bool estavazio(); //is_empty
    bool estacheio(); //is_full
    void inserir(TipoItem item); //push //enqueue
    TipoItem remover(); //pop //dequeue
    void imprimir(); //print
};