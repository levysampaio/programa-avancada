#include <iostream>

#include "pilha.h"
#include "ponto.h"

int main() {

    Ponto ponto1(2,3);
    Ponto ponto2(4,3);

    ponto1.imprime();
    ponto2.imprime();

    Ponto soma = ponto1 + ponto2;
    Ponto mult = ponto1 * ponto2;
    Ponto sub = ponto1 - ponto2;
    Ponto multE = ponto1 * 12;

    soma.imprime();
    mult.imprime();
    sub.imprime();
    multE.imprime();




    return 0;
}