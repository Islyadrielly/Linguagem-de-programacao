/* 6)Um determinado material radioativo perde metade de sua massa a cada 50 segundos. Dada a massa 
inicial, em gramas, fazer um algoritmo que determine o tempo necessário para que essa massa se torne 
menor do que 0,5 grama. Escreva a massa inicial, a massa final e o tempo calculado em horas, minutos
e segundos.*/

#include <iostream> 
#include <iomanip>

using namespace std;

int main() {

    float m_inicial =0, m_final =0;
    int h =0, min =0, sg =0;

    cout << "Informe a massa do material radioativo: " << endl;
    cin >> m_inicial; 

    for (m_final = m_inicial; m_final > 0.5;) {
        sg += 50;
        m_final /= 2;
    
    if (sg >= 60) {
        min++;
        sg -= 60;
    }
    else 
        if (min >= 60) {
            h++;
            min -= 60;
        }
    
    }    

    cout << "-----------------------------------------------" << endl;
    cout << "Massa inicial: " << m_inicial << endl;
    cout << fixed << setprecision(1);
    cout << "Massa final: " << m_final << endl;
    cout << "tempo necessário para massa ser menor que 0,5g:" << endl;
    cout << h << " horas, " << min << " minutos e " << sg << " segundos." << endl;   
    cout << "-----------------------------------------------" << endl;

    
    system("pause");
    return 0;
}    