#include "Pessoa.h"
#include <stdio.h>
#include <string.h>
#include <iostream> 
using std::cout; 
using std::endl;
using std::cin;

//OBS: Para realizar a compilação dos arquivos, é necessário que a compilação seja feita junta.
// Ou seja, utilizaremos os seguintes comandos:
// g++ Pessoa.cpp main.cpp -o teste (compilar)
// ./teste (rodar) :D

int main() {
    int dia, mes, ano;

    Pessoa Rosa(5, 3, 1871, "Rosa Luxemburgo");
    Pessoa Angela(26, 1, 1944, "Angela Davis");
    Pessoa Ada(10, 12, 1815, "Ada Lovelace");
    Pessoa Pyettra(29, 1, 1997, "Pyettra Ferreira");

    // Nessa versão, utilizamos o cin como o conhecido scanf da linguagem C
    // Lembrando que devemos informar ao arquivo main a biblioteca que será
    // importada para tal.
    cout <<"Informe o dia"<< endl;
    cin >> dia;

    cout <<"Informe o mes"<< endl;
    cin >> mes;

    cout <<"Informe o ano"<< endl;
    cin >> ano;

    Rosa.Calcula_Idade(dia, mes, ano);
    Angela.Calcula_Idade(dia, mes, ano);
    Ada.Calcula_Idade(dia, mes, ano);
    Pyettra.Calcula_Idade(dia, mes, ano);

    getchar();
    return 0;
}