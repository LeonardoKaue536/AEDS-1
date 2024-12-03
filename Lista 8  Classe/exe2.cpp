#include <iostream>
using namespace std;

class Relogio
{
public:
    int hora;
    int minuto;
    int segundo;

    Relogio(int h = 0, int m = 0, int s = 0):hora(h),minuto(m),segundo(s){}

    void setHorario(int h, int m, int s)
    {
        hora = h;
        minuto = m;
        segundo = s;
    }
    void proximoseg()
    {
        segundo++;
        if(segundo == 60)
        {
            segundo = 0;
            minuto++;
            if(minuto == 60){
                minuto = 0;
                hora = (hora + 1) % 24;
            }
        }
    }

    string getHorarioFormatado() {
        string s = to_string(hora) + ":" + to_string(minuto) + ":" + to_string(segundo);
        return s;
    }
};

int main()
{
    // declaração das variáveis
    int n;
    int h, m, s;

    cin >> n;
    if ((n >= 1) && (n <= 1000))
    {
        for (int i = 0; i < n; i++)
            ;
        {
            cin >> h >> m >> s;
            Relogio relogio(h, m, s);

            relogio.proximoseg();
            cout<<"horario inicial: "<< relogio.getHorarioFormatado();
        }
    }
    else if (n < 1)
    {
        cout << "N nao pode ser negativo" << endl;
    }
    else
    {
        cout << "N maior que 1000" << endl;
    }
    return 0;
}
