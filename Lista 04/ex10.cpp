/* 10)Foi feita uma pesquisa de audiência de canal de TV em várias casas de uma certa cidade, 
num determinado dia. Para cada casa visitada, é fornecido o número do canal (4,5,7,12) e o número 
de pessoas que o estavam assistindo naquela casa. Se a televisão estivesse desligada, nada era anotado, 
ou seja, esta casa não entrava na pesquisa. Fazer um algoritmo que:
• leia um número indeterminado de dados, sendo que o “FLAG” corresponde ao número do canal igual a zero;
• calcule a porcentagem de audiência para cada emissora;
• escreva o número do canal e a sua respectiva porcentagem.*/

#include <iostream>
#include <iomanip>

using namespace std;

int main() {

    int canal, c4 =0, c5 =0, c7 =0, c12 =0;
    float pc4 =0, pc5 =0, pc7 =0, pc12 =0, casa =0, p =0, pcasa =0;

    do {
        cout << "Pesquisa de audiência dos canais 4, 5, 7 e 12" << endl;
        cout << "Qual canal estava sendo assistido? [Digite 0 se nenhum]: "; 
        cin >> canal;
        if (canal ==0) break;
        cout << "Quantas pessoas assistiam a este canal na casa? ";
        cin >> p; 

        casa += p;
        
        if(canal==4||canal==5||canal==7||canal==12){
        switch (canal)
        {
        case 4: c4 += p;
            break;
        case 5: c5 += p;
            break;
        case 7: c7 += p;
            break;
        case 12: c12 += p;  
            break; 
        default: cout << "O canal não está na pesquisa." << endl;       
        }}

    } while(canal != 0);

    pc4 = (c4 / casa) * 100;
    pc5 = (c5 / casa) * 100;
    pc7 = (c7 / casa) * 100;
    pc12 = (c12 / casa) * 100;

    cout << "------------------------------------------------" << endl;
    cout << fixed << setprecision(1);
    cout << "A audiência da emissora do canal 4 é: " << c4 << endl;
    cout << "A audiência da emissora do canal 5 é: " << c5 << endl;
    cout << "A audiência da emissora do canal 7 é: " << c7 << endl;
    cout <<"A audiência da emissora do canal 12 é: " << c12 << endl;
    cout << "A porcentagem para o canal 4 foi de: " << pc4 << "%." << endl;
    cout << "A porcentagem para o canal 5 foi de: " << pc5 << "%." << endl;
    cout << "A porcentagem para o canal 7 foi de: " << pc7 << "%." << endl;
    cout << "A porcentagem para o canal 12 foi de: " << pc12 << "%." << endl;
    cout << "------------------------------------------------" << endl;

    system("pause");
    return 0;
}    