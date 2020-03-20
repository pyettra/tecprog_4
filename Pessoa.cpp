#include <stdio.h>
#include <string.h>
#include "Pessoa.h"
#include <iostream> 
using std::cout; 
using std::endl;

Pessoa::Pessoa(int diaN, int mesN, int anoN, char* nome) {
    diaP = diaN;
    mesP = mesN;
    anoP = anoN;
    strcpy(nomeP, nome);

    Calcula_Idade(8, 3, 2020);
} 

void Pessoa::Calcula_Idade(int diaAt, int mesAt, int anoAt) {
    idadeP = anoAt - anoP;

    if (mesP < mesAt) {
        idadeP = idadeP - 1;
    } else {
        if (mesP == mesAt) {
            if (diaP < diaAt) {
                idadeP = idadeP - 1;
            }
        }
    }

    cout <<"A pessoa "<<nomeP<<" teria "<<idadeP<<" anos"<< endl; 
}

int Pessoa::informaIdade() {
    return idadeP;
}

