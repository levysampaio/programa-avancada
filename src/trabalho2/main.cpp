#include <iostream>


#include "conta.h"
#include "contaPoupanca.h"
#include "contaCorrente.h"
#include "cliente.h"
int main() {

    ContaPoupanca cp1(4343, Cliente("Joao"));

    ContaPoupanca cp2(4543, Cliente("Livia"));

    ContaCorrente cc1(2342, Cliente("Julio"));

    ContaCorrente cc2(3421, Cliente("Claudia"));

    cp1.extrato();

    cout << " " << endl;
    cout << " " << endl;

    cp2.extrato();

    cp1.deposita(1000);
    cp1.retira(500);



    cout << " " << endl;
    cout << " " << endl;

    cp1.extrato();


    cc1.deposita(2000);
    cp2.deposita(2000);

    cout << " " << endl;
    cout << " " << endl;

    cp2.extrato();
    cp2.aplicaJurosDiarios(100));

    cout << " " << endl;
    cout << " " << endl;

    cc1.extrato();
    cc1.aplicaJurosDiarios();

    cout << " " << endl;
    cout << " " << endl;

    cc2.extrato();

    return 0;
}
