/* 12) Problemas simples do cotidiano podem representar desafios para o mundo computacional. 
Faça um programa que, dados três números inteiros representando dia, mês e ano de uma data, 
imprima qual o dia seguinte. */

#include <iostream>


using namespace std;

int main () 
{
    system("color 03");

    // declaração das variáveis:
    int dia, mes, ano;
    bool bissexto;

    cout << "Insira um dia: "; 
    cin >> dia;
    cout << "Insira um mês: ";
    cin >> mes; 
    cout << "Insira um ano: ";
    cin >> ano;

    if (ano % 4 == 0 && (ano % 400 == 0 || ano % 100 != 0)) 
    bissexto = 1;
        else 
        bissexto = 0;

    if (mes == 1 || mes == 3 || mes == 5 || mes == 7 || mes == 8 || mes == 10){
        if (dia >= 1 && dia <=30){
            dia += 1;
        } else
            if (dia == 31){
                mes += 1;
                dia = 01;
            } else
                 cout << "Data inválida.\n";
    } else
        if (mes == 4 || mes == 9 || mes == 11){
            if (dia >= 1 && dia <= 29){
                dia++;
            } else
                if (dia == 30) {
                    mes+=1;
                    dia = 01;
                } else  
                     cout << "Data inválida.\n";
        }

    if (mes == 12){
        if(dia >= 1 && dia <= 30){
            dia+=1;
        } else
            if(dia == 31){
                mes = 01;
                dia = 01;
                ano+=1;
            } else
                 cout << "Data inválida.\n";
    } 

    if (mes == 2){
        if(bissexto == 1){
            if(dia >= 1 && dia <=28){
                dia+=1;
            } else
                if (dia == 29){
                    mes+=1;
                    dia = 01;
                } else
                    cout << "Data inválida.\n";
        } else
            if (bissexto == 0){
                if (dia >= 1 && dia <= 27){
                    dia+=1;
                } else
                    if(dia == 28){
                        mes+=1;
                        dia = 01;
                    } else
                        cout << "Data inválida.\n";
            }
    } 

    if (mes < 1 && mes > 12)
        cout << "Data inválida./n";

        else    
        cout << "---------------------------------------------------------" << endl;
        cout << "Data seguinte: " << dia << "/" << mes << "/" << ano << "." << endl;   


system("pause");
return 0;

}