//
// Created by levys on 25/04/2018.
//

#ifndef _CONTACORRENTE_H
#define _CONTACORRENTE_H

#include "conta.h"
#include "cliente.h"
class ContaCorrente: public Conta{

public:

    ContaCorrente(int numero, Cliente cliente) : Conta(numero, cliente) {

    }

    void extrato() {

        cout << "-------Extrato------" << endl;
        cout << "---Conta Corrente---" << endl;
        cout << "Conta.:" << getNumero() << endl;
        cout << "Saldo.:" << getSaldo() << endl;

    }

    void aplicaJurosDiarios(int dias) {

        cout << "Saldo COM juros aplicado: " << getSaldo() * (0.01 * dias) << endl;

    }


private:

};

#endif //_CONTACORRENTE_H

