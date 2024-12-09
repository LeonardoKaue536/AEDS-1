#include <iostream>
using namespace std;

class carro{
private:
    int tanque = 50;
public:
    int atual;
    int distancia;
    int restante;

    void mostrar(){
        int restante = atual - (distancia/15);
        cout<<"Distância percorrida: "<<distancia<<endl;
        cout<<"Combustível restante: "<<restante<<endl;
    }

};

int main()
{

    carro *carros = new carro[2];

    //conbustivél inicial
    cin>>carros[1].atual;
    cin>>carros[2].atual;
    //distancia percorrida
    cin>>carros[1].distancia;
    cin>>carros[2].distancia;


    //mostrar resultado
    cout<<"Carro 1:"<<endl;
    carros[1].mostrar();
    cout<<endl;
    cout<<"Carro 2:"<<endl;
    carros[2].mostrar();

    


    return 0;
}