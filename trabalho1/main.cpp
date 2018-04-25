#include <iostream>
#include "veiculo.h"
#include "carro.h"
#include "caminhao.h"
#include "caminhonete.h"

int main() {


    Veiculo v1;
    v1.imprimeDetalhes();

    cout << "--------------------" << endl;

    Veiculo v2("AZZ-5643",500.0,150,30000);
    v2.imprimeDetalhes();

    cout << "--------------------" << endl;

    Carro c1;
    c1.imprimeDetalhes();

    cout << "--------------------" << endl;

    Carro c2("ADE-5434", 500, 200, 80000, "Azul", "Corolla");
    c2.imprimeDetalhes();


    cout << "--------------------" << endl;

    Caminhao cam1;
    cam1.imprimeDetalhes();

    cout << "--------------------" << endl;

    Caminhao cam2("ADE-5434", 500, 200, 80000, 3.2, 8.0, 7.2);
    cam2.imprimeDetalhes();

    cout << "--------------------" << endl;

    Caminhonete caminh;
    caminh.imprimeDetalhes();


    return 0;
}