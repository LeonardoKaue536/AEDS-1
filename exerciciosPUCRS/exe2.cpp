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
    int a, c, op = 0, andar = 0, pessoas = 0;
    cout << "digite o total de andares e capacidade do elevador:" << endl;
    cin >> a >> c;

    Elevador elevador(a,c);

    // receber a opção
    while (op != 5)
    {

        cout<< "Pessoas no elevador:"<< elevador.getpessoas() <<endl;
        cout<< "Andar que esta:"<< elevador.getandar() <<endl;
        cout << "1-Escolha acrescentar pessoa:" << endl;
        cout << "2-Escolha remover pessoa:" << endl;
        cout << "3-Escolha subir elevador:" << endl;
        cout << "4-Escolha descer elevador:" << endl;
        cout << "5-Finalizar programa:" << endl;
        cin >> op;

        switch (op)
        {
        case 1://Acrescentar pessoa
            if(elevador.getpessoas() != elevador.getcapacidade())
            {
                cout<<"Voce adicionou 1 pessoa"<<endl;
                pessoas +=1;
                elevador.setquandidadedepessoas(pessoas);

            }else{
                cout<<"O elevador esta cheio"<<endl;

            }
            
            

            break;
        case 2://Retirar pessoa
            if(elevador.getpessoas() != 0)
            {
                cout<<"Voce removeu 1 pessoa"<<endl;
                pessoas -=1;
                elevador.setquandidadedepessoas(pessoas);

            }else{
                cout<<"O elevador esta vazio"<<endl;

            }

            break;
        case 3://subir andar
            if( elevador.getandar() != elevador.gettotalandares())
            {
                cout<<"Voce subiu 1 andar"<< endl;
                andar += 1;
                elevador.setandar(andar);

            }else{
                cout<<"O elevador ja esta no ultimo andar"<< endl;
            }

            break;
        case 4://descer andar
            if(elevador.getandar() != 0)
            {
                cout<<"Voce desceu 1 andar"<<endl;
                andar-=1;
                elevador.setandar(andar);
            }else{
                cout<<"O elevador ja esta no terrio"<< endl;
            }

            break;
        case 5:
            cout<<"programa finalizado"<< endl;
            break;

        default:
            cout<< "opcao invalida"<< endl;
            break;
        }
    }
    return 0;
}