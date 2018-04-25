//
// Created by levys on 16/04/2018.
//

#ifndef _CARRO_H
#define _CARRO_H

#include "veiculo.h"

#include <string>

using namespace std;

class Carro: public Veiculo{

public:

        // CONSTRUTORES

        Carro(): Veiculo(),
                _modelo(),
                _cor() {};


        Carro(string placa, double peso, double velMaxima, double preco, string modelo, string cor): Veiculo(placa,
                                                                                                             peso,
                                                                                                             velMaxima,
                                                                                                             preco),
                                                                                                     _modelo(modelo),
                                                                                                     _cor(cor) {};


        // METODOS - ACESSORES (getters)

        string getModelo() { return _modelo; };
        string getCor() { return _cor; };

        // METODOS - MUTANTES (setters)

        void setModelo(string modelo){ _modelo = modelo;};
        void setCor(string cor){ _cor = cor;};


        // METODOS - GERAIS

        void imprimeDetalhes(){

            cout << "Cor.: " << _cor << endl;
            cout << "Modelo.: " << _modelo << endl;
            cout << "Placa.: " << getPlaca()<<  endl;
            cout << "Peso.: " << getPeso() << " Kg" << endl;
            cout << "Velocidade Maxima.: " << getVelMaxima() << " Km/h" << endl;
            cout << "Preco.: R$ " << getPreco() << endl;

        }




private:

        string _modelo;
        string _cor;

};

#endif //_CARRO_H
