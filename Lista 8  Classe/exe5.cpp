#include <iostream>
using namespace std;

class Elevador
{
private:
    int totalandares;
    int capacidade;

public:
    int quantidadepessoas = 0;
    int andar = 0;

    // Construtor
    Elevador(int a, int c) : totalandares(a), capacidade(c) {}

    // inicializa a capacidade e o total de andares
    void setincializa(int a, int c)
    {
        totalandares = a;
        capacidade = c;
    }

    void setandar(int b)
    {
        andar = b;
    }

    void setquandidadedepessoas(int b)
    {
        quantidadepessoas = b;
    }

    int getcapacidade()
    {
        return capacidade;
    }

    int getpessoas()
    {
        return quantidadepessoas;
    }

    int getandar()
    {
        return andar;
    }

    int gettotalandares()
    {
        return totalandares;
    }
};

int main()
{
    // declaração de variáveis1
    int a, c, num, andar = 0, pessoas = 0;
    string op;
    //cout << "digite o total de andares e capacidade do elevador:" << endl;
    cin >> a >> c;
    cin >> num;

    Elevador elevador(a, c);

    // receber a opção
    for (int i = 0; i < num; i++)
    {
        cin>>op;
        // Acrescentar pessoa
        if (op == "entrar")
        {
            if (elevador.getpessoas() != elevador.getcapacidade())
            {
                // cout << "Voce adicionou 1 pessoa" << endl;
                pessoas += 1;
                elevador.setquandidadedepessoas(pessoas);
            }
            else
            {
                cout << "O elevador esta cheio" << endl;
            }
        }

        // Retirar pessoa
        if (op == "sair")
        {
            if (elevador.getpessoas() != 0)
            {
                // cout << "Voce removeu 1 pessoa" << endl;
                pessoas -= 1;
                elevador.setquandidadedepessoas(pessoas);
            }
            else
            {
                cout << "O elevador esta vazio" << endl;
            }
        }

        // subir andar
        if (op == "subir")
        {
            if (elevador.getandar() != elevador.gettotalandares())
            {
                //cout << "Voce subiu 1 andar" << endl;
                andar += 1;
                elevador.setandar(andar);
            }
            else
            {
                cout << "O elevador ja esta no ultimo andar" << endl;
            }
        }

        // descer andar
        if (op == "descer")
        {
            if (elevador.getandar() != 0)
            {
                //cout << "Voce desceu 1 andar" << endl;
                andar -= 1;
                elevador.setandar(andar);
            }
            else
            {
                cout << "O elevador ja esta no terrio" << endl;
            }

            
        }
            cout << "Andar atual: " << elevador.getandar() << endl;
            cout << "Pessoas presentes: " << elevador.getpessoas() << endl;
        
    }
    return 0;
}