#include <iostream>
using namespace std;
/*
    todas as bibliotecas e comandos de c podem ser utilizados em c++,
    mas alguns são substituídos por outros mais efecientes
*/

//Exemplo classe
class aluno
{
    private:
        //atributos
        string nome;
        int idade;
        float notas[3]; 
        
    
    public:
        //contrutor sem parâmetros
        aluno()
        {
            nome = "nenhum";//string é um tipo básico
            idade = 1;
            notas[0] = 0.0;
            notas[1] = 0.0;
            notas[2] = 0.0; 
        }
        //método
        void exibe()
        {
            cout<< nome << "," << idade << notas[0] << ","<< notas[1] << ","<< notas[2] << ","<< endl;
        }

    protected:

    private:

    /*
        Visibilidade dos membros indicados a seguir até que seja
        indicada nova visibilidade externa ao bloco de comandos da classe
    
    
    */
};

//C++
int main(){
    //Exemplo:
    //declaração de variáveis
    int valor = 10;
    cout<<"O valor eh "<<valor<<endl;

    //Leitura
    cout<<"Digite um valor: "<<endl;
    cin>>valor;//Utiliza-se "cin"

    cout<<"O valor digitado foi: "<< valor;

    return 0;
}