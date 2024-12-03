#include <iostream>
#include <string>

using namespace std;

class pessoa
{
    public:
        string nome;
        int idade;
        float tamanho;

        void exibir(){
            cout<<"Dados da pessoa:"<<endl;
            cout<<"Nome: "<<nome<<endl;
            cout<<"Idade: "<<idade<<" anos"<<endl;
            cout<<"Altura: "<<tamanho<<" metros"<<endl;
        }

};

int main()
{
    //declaração de das variáveis
    int n;

    //pedir quantidade de pessoas
    cin >> n;

    //alocação para cada pessoa
    pessoa *pessoas = new pessoa[n];

    //for para receber os dados de cada pessoas
    for(int i = 0; i < n; i++)
    {
        cin>> pessoas[i].nome >> pessoas[i].idade >> pessoas[i].tamanho;
    }

    //for para mostrar os dados de cada pessoa
    for(int i = 0; i < n; i++)
    {
        pessoas[i].exibir();
    }

    //Liberar memoria
    delete[] pessoas;
    
    return 0;
}