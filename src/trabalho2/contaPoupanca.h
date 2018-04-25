//
// Created by levys on 25/04/2018.
//

#ifndef _CONTAPOUPANCA_H
#define _CONTAPOUPANCA_H

#include <iostream>

#include <cmath>

#include "Conta.h"

#include "cliente.h"

using namespace std;

class ContaPoupanca : public Conta {

public:

    ContaPoupanca(int numero, Cliente cliente) : Conta(numero, cliente) {

    }

    void extrato() {

        cout << "-------Extrato------" << endl;
        cout << "---Conta Poupanca---" << endl;
        cout << "Conta.:" << getNumero() << endl;
        cout << "Saldo.:" << getSaldo() << endl;

    }

    void aplicaJurosDiarios(int dias) {

        cout << "Saldo COM juros aplicado: " << getSaldo() * (0.08 * dias) << endl;

    }


};

#endif //_CONTAPOUPANCA_H
