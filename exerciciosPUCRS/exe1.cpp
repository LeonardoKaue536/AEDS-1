#include <iostream>
#include <string>
using namespace std;

class pessoa
{
private:
    string nome;
    int idade;
    float altura;

public:
    pessoa(string n, int i, float a):nome(n), idade(i), altura(a){}

    void setpessoa(string n, int i, float a)
    {
        nome = n;
        idade = i;
        altura = a;
    }

    string getexibirnome()
    {
        return nome;
    }
    int getexibiridade()
    {
        return idade;
    }
    float getexibiraltura()
    {
        return altura;
    }

};

int main()
{
    //declaração das variáveis
    string n;
    int i;
    float a;

    cin >> n >> i >> a;

    pessoa pessoa(n,i,a);

    cout << "Nome: "<< pessoa.getexibirnome() << endl;
    cout << "Idade: "<< pessoa.getexibiridade() << endl;
    cout << "Altura: "<< pessoa.getexibiraltura() << endl;


    
    return 0;
}