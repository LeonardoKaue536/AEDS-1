#include <iostream>
#include <string>

using namespace std;

class Relogio {
public:
    int hora, minuto, segundo;

    Relogio(int h = 0, int m = 0, int s = 0) : hora(h), minuto(m), segundo(s) {}

    void setHorario(int h, int m, int s) {
        hora = h;
        minuto = m;
        segundo = s;
    }

    void avancarSegundo() {
        segundo++;
        if (segundo == 60) {
            segundo = 0;
            minuto++;
            if (minuto == 60) {
                minuto = 0;
                hora = (hora + 1) % 24; // Garante que a hora fique entre 0 e 23
            }
        }
    }

    string getHorarioFormatado() {
        string s = to_string(hora) + ":" + to_string(minuto) + ":" + to_string(segundo);
        return s;
    }
};

int main() {
    int N;
    cin >> N;

    for (int i = 0; i < N; ++i) {
        int h, m, s;
        cin >> h >> m >> s;

        Relogio relogio(h, m, s);
        cout << "Horário inicial:\n" << relogio.getHorarioFormatado() << endl;

        relogio.avancarSegundo();
        cout << "Novo horário:\n" << relogio.getHorarioFormatado() << endl << endl;

        
    }

    return 0;
}