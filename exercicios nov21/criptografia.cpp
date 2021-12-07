#include <iostream> 
#include <string.h>

using namespace std;

char caracter[9999999], linha[9999999];
int i, tamanho;
FILE *arquivo;


void Abrir() { //abrindo o arquivo
    arquivo = fopen("texto.txt","r");
    
        if (arquivo==NULL) {
            cout << endl;
            cout << "Erro ao abrir o arquivo." << endl;
    }

}

void Exibir() { //função para exibir o texto do arquivo
    Abrir();
    strcpy(caracter,"");
    while(fgets(linha,9999999,arquivo)!=NULL) {
        strcat(caracter,linha);
    }
}

//utilizando cifra de cesar nas funções abaixo.

void Criptografar() {
    Exibir();

    tamanho = strlen(caracter); // armazenando o tamanho do texto

    for (i=0;i<tamanho;i++) {
        caracter[i] = toupper(caracter[i]);
        if (caracter[i] == 'X') {
            caracter[i] = 'A';
        }

        else if (caracter[i] == 'Y') {
            caracter[i] = 'A';
            caracter[i] = caracter[i]+1;
        }

        else if (caracter[i] == 'Z') {
            caracter[i] = 'A';
            caracter[i] = caracter[i]+2;
        }

        else if (caracter[i] == ' ') {}

        else if (caracter[i] == '\n') {}

    else caracter[i] = caracter[i]+3;

    }

    arquivo = fopen("texto.txt","w");

    fprintf(arquivo,caracter);

    fclose(arquivo);

    cout << "Arquivo Criptografado com sucesso." << endl;
}

void Descriptografar() {
    Exibir();

    tamanho = strlen(caracter); // armazenando o tamanho do texto

    for (i=0;i<tamanho;i++) {

        if (caracter[i] == 'A') {
            caracter[i] = 'X';
        }

        else if (caracter[i] == 'B') {
            caracter[i] = 'Y';
        }

        else if (caracter[i] == 'C') {
            caracter[i] = 'Z';
        }

        else if (caracter[i] == ' ') {}   

        else if (caracter[i] == '\n') {}

        else {
            caracter[i] = caracter[i]-3;
        }
    }


    arquivo = fopen("texto.txt","w");

    fprintf(arquivo,caracter);

    fclose(arquivo);

    cout << "Arquivo Descriptografado com sucesso." << endl;
}


int main() {

    while(true) {

        int opcao;

        cout << "----------MENU----------" << endl;
        cout << "[1] Criptografar texto.\n";
        cout << "[2] Descriptografar texto.\n";
        cout << "[3] Exibir texto.\n";
        cout << "[9] Sair.\n";
        cout << "Escolha uma opção: ";
        cin >> opcao;
        cout << "-------------------------\n";

        system("cls");

        switch (opcao) {
        case 1: Criptografar(); break;
        case 2: Descriptografar(); break;
        case 3: Exibir(); cout << caracter << endl; break;
        case 9: return 0;
        default: cout << "\nEscolha uma opção válida."; break;
        }    
    }
        return 0;
}