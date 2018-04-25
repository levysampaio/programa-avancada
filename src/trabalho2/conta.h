//
// Created by levys on 25/04/2018.
//

#ifndef _CONTA_H
#define _CONTA_H

#include <iostream>

#include <string>

#include "Cliente.h"

using namespace std;

class Conta {

public:

    //CONTRUTORES

    Conta(int numero, Cliente cliente) : _numero(numero),
                                          _saldo(0),
                                          _cliente(cliente){

        cout << "Criando Conta numero" << _numero <<" do Cliente " << _cliente.getNome() << endl;

    }

    //MÉTODOS

    void deposita(float valor) {
        _saldo += int(valor * 100);
    }

    void retira(float valor) {
        _saldo -= int(valor * 100);
    }

    void transfere(Conta &contaDestino, double valor){

        if(valor > this->_saldo){

            cout << "Saldo indisponível" << endl;
        }
        this->_saldo -= valor;

        contaDestino.deposita(valor);
    };

    //MÉTODOS ABSTRATOS

    virtual void extrato() {};

    virtual void aplicaJurosDiarios(int dias) = 0;


    //GETTERS
    int getNumero(){ return _numero;}

    float getSaldo(){
        return float(_saldo/100.0);
    }

    //SETTERS
    void setNumero(int numero) {_numero = numero;}

    void setSaldo(float saldo){
        _saldo = int(saldo * 100);
    }



private:
    //VARIÁVEIS
    int _numero;
    int _saldo;
    Cliente _cliente;
};

#endif //_CONTA_H
