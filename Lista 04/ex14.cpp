/* 14)Tem-se uma estrada ligando várias cidades. Cada cidade tem seu marco quilométrico. 
Fazer um algoritmo que:•leia vários pares de dados, contendo cada par os valores dos marcos 
quilométricos, em ordem crescente, de duas cidades. O último par contém estes dois valores iguais;
• calcule os tempos decorridos para percorrer a distância entre estas duas cidades, com as seguintes 
velocidades: 20, 30, 40, 50, 60, 70, 80 km/hora, sabendo-se que t = e/v, onde t=tempo; e=espaço; v=velocidade; 
• escreva os marcos quilométricos, a velocidade e o tempo decorrido entre as duas cidades, apenas quando este
tempo for superior a 2 horas.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

	float m1, m2, tempo = 0, distancia =0;
	int velocidade = 0, i =0;

	do {
		cout << "Digite o primeiro marco quilométrico: " << endl;
		cin >> m1;
		cout << "Digite o segundo marco quilométrico: " << endl;
		cin >> m2;

		for (i =2; i<=8; i++) {
		// ex, no 1, velocidade 1*10 =10
		velocidade = i * 10;
		distancia = m2 - m1;
		tempo = (float)distancia / velocidade;

		if(tempo > 2.0) { 	
			cout << fixed << setprecision(1);
			cout << "Marcos quilométricos: " << m1 << ", " << m2 << endl;
			cout << "Velocidade: " << velocidade << endl;
			cout << "Tempo decorrido: " << tempo << " horas" << endl;
		}
		}
	} while (m1 != m2);

system("pause");
return 0;
}
