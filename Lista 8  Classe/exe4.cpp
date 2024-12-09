#include <iostream>
#include <string>
using namespace std;

class autor{
public:
    string nome;


    void imprimea(){
        cout<<"Autor: "<<nome<<endl;
    }
};

class livro{
public:
    string titulo;
    int ano;

    void imprimel(){
        cout<<"Título: "<<titulo<<endl;
        cout<<"Ano de Publicação: "<<ano<<endl;
    }

};

int main(){

    //objeto
    autor autor;
    livro livro;
    //receber o informações
    getline(cin, autor.nome);
    getline(cin, livro.titulo);
    cin>>livro.ano;

    cout<<"Detalhes do Livro:"<<endl;
    livro.imprimel();
    autor.imprimea();

    return 0;
}