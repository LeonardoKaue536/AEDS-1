#include <iostream>
#include <iomanip>
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

   int gethora()
   {
        return hora;
   }
   int getminuto()
   {
        return minuto;
   }
   int getsegundo()
   {
        return segundo;
   }
};

int main()
{
    // declaração das variáveis
    int n;
    int h, m, s;


    cin >> n;
    if((n >= 1) && (n <= 1000))
    {
        for (int i = 0; i < n; i++)
        {
            cin >> h >> m >> s;
            Relogio relogio(h, m, s);

            relogio.proximoseg();
            cout<<"Horário inicial: "<<setw(2)<<setfill('0')<<h<<":"<<setw(2)<<setfill('0')<<m<<":"<<setw(2)<<setfill('0')<<s<<endl;
            cout<<"Novo horário: "<<setw(2)<<setfill('0')<<relogio.gethora()<<":"<<setw(2)<<setfill('0')<<relogio.getminuto()<<":"<<setw(2)<<setfill('0')<<relogio.getsegundo()<<endl;
            cout<<endl;
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
