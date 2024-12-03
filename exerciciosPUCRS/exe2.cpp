#include <iostream>
using namespace std;

class Elevador
{
public:
    int andar = 0;
    int totalandares;
    int capacidade;
    int quantidadepessoas = 0;

    Elevador(int a, int c) : totalandares(a), capacidade(c) {}

    // inicializa a capacidade e o total de andares
    void setincializa(int a, int c)
    {
        totalandares = a;
        capacidade = c;
    }

    void setsubir(int b)
    {
        andar = b;
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
    int a, c, op = 0, andar,pessoas = 0;
    cout << "digite o total de andares e capacidade do elevador:" << endl;
    cin >> a >> c;

    Elevador elevador(a,c);

    // receber a opção
    while (op != 5)
    {
    
        cout << "1-Escolha acrescentar pessoa:" << endl;
        cout << "2-Escolha remover pessoa:" << endl;
        cout << "3-Escolha subir elevador:" << endl;
        cout << "4-Escolha descer elevador:" << endl;
        cout << "5-Finalizar programa:" << endl;
        cin >> op;

        switch (op)
        {
        case 1:
            

            break;
        case 2:

            break;
        case 3:
            if( elevador.getandar() != elevador.gettotalandares())
            {
                cout<<"Digite para qual andar deseja ir:"<< endl;
                cin >> andar;

                if(andar > elevador.gettotalandares()){
                    cout<<"Não possui este andar"<< endl;
                }else if(andar < 0){
                    cout<<"andar não existe"<< endl;
                }else if(andar == elevador.getandar()){
                    cout<<"voce ja esta nesse andar"<<endl;
                }else{
                    elevador.setsubir(andar);
                }

            }else{

                cout<<"O elevador ja esta no ultimo andar"<< endl;
            }

            break;
        case 4:

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