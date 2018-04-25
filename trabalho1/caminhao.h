//
// Created by levys on 16/04/2018.
//

#ifndef _CAMINHAO_H
#define _CAMINHAO_H


#include "veiculo.h"

class Caminhao: public Veiculo {


public:

    // CONSTRUTORES

    Caminhao() : Veiculo(), _capacidade(), _comprimento(), _altura() {};

    Caminhao(string placa, double peso, double velMaxima, double preco, double cap, double comp, double alt) : Veiculo(
            placa,
            peso,
            velMaxima,
            preco),
                                                                                                               _capacidade(
                                                                                                                       cap),
                                                                                                               _comprimento(
                                                                                                                       comp),
                                                                                                               _altura(alt) {};


    // METODOS - ACESSORES (getters)

    double getComp() { return _comprimento; };

    double getCap() { return _capacidade; };

    double getAlt() { return _altura; };


    // METODOS - MUTANTES (setters)

    void setComp(double comp) { _comprimento = comp; };

    void setCap(double cap) { _capacidade = cap; };

    void setAlt(double alt) { _altura = alt; };


    void imprimeDetalhes() {


        cout << "Capacidade.: " << _capacidade << " Toneladas" << endl;
        cout << "Comprimento.: " << _comprimento << " Metros" << endl;
        cout << "Altura.: " << _altura << " Metros" << endl;
        cout << "Placa.: " << getPlaca() << endl;
        cout << "Peso.: " << getPeso() << " Kg" << endl;
        cout << "Velocidade Maxima.: " << getVelMaxima() << " Km/h" << endl;
        cout << "Preco.: R$ " << getPreco() << endl;

    }

private:

    double _capacidade;
    double _comprimento;
    double _altura;

};

#endif //_CAMINHAO_H
