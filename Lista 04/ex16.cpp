/* 16)Uma empresa decidiu fazer um levantamento em relação aos candidatos que se apresentarem para 
preenchimento de vagas no seu quadro de funcionários, utilizando processamento eletrônico. Supondo 
que você seja o programador encarregado desse levantamento, fazer um algoritmo que:
• leia um conjunto de dados para cada candidato contendo: 
a)número de inscrição do candidato;
b)idade;
c)sexo (masculino, feminino);
d)experiência no serviço (sim ou não).*/

#include <iostream>

using namespace std;

int main(){

    int ncand, idade =0, fem =0, mas =0, m35 =0, h45 =0, menor =0, i =0; 
    float media_idade =0;
    char sexo, xp;

    do {
        cout << "Informe o número de inscrição do candidato: ";
        cin >> ncand;
        if(ncand ==0)
            break;  
        cout << "Informe a idade do candidato: ";
        cin >> idade;    
        cout << "Informe o sexo do candidato [F/M]: ";
        cin >> sexo;
        cout << "Informe se candidato possui experiência no serviço [S/N]: ";
        cin >> xp;

        if(i ==0)
        menor = idade;
        i++;

        //número de candidatos do sexo feminino/masculino
        if(sexo == 'F')
            fem++;
        else if (sexo == 'M')
	        mas++;

        //idade média dos homens com mais de 45 anos entre o total de homens
        if(idade >45) {
            h45+= idade;    
            media_idade = h45/mas;
        }

        //número de mulheres que têm idade inferior a 35 anos e com experiência no serviço
        if(sexo == 'F' && xp == 'S')
	        m35++;

        //menor
        if (sexo == 'F' && xp == 'S') { //sem if dentro do if nao funcionava, não faz sentido mas não funcionava   
            if (idade < menor) 
            menor = idade;}

} while (ncand !=0);

// professor, não existe item E na questão. letra A nula; fiz apenas letra B

cout << "-----------------------------------------------------------------------------------" << endl;
cout << "Número de candidatos do sexo Feminino: " << fem << endl;
cout << "Número de candidatos do sexo Masculino: " << mas << endl;
cout << "Idade média dos homens com mais de 45 anos entre o total de homens: " << media_idade << endl;
cout << "Número de mulheres com idade inferior a 35 anos e com experiência no serviço: " << m35 << endl;
cout << "A menor idade entre mulheres que já possui experiência no serviço: " << menor << endl;
cout << "-----------------------------------------------------------------------------------" << endl;


system("pause");
return 0;    
}    