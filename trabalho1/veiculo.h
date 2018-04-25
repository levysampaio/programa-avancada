//
// Created by levys on 16/04/2018.
//

#ifndef _VEICULO_H
#define _VEICULO_H

#include <string>
#include <iostream>

using namespace std;


class Veiculo {

public:
    // CONSTRUTORES


    Veiculo() : _placa(""),
                _peso(0.0),
                _velMaxima(0.0),
                _preco(0.0) {};

    Veiculo(string placa, double peso, double velMaxima, double preco) : _placa(placa),
                                                                         _peso(peso),
                                                                         _velMaxima(velMaxima),
                                                                         _preco(preco){};


    // DESTRUTOR


    // METODOS - ACESSORES (getters)

    string getPlaca(){ return _placa; };
    int getPeso(){ return _peso; };
    int getVelMaxima() { return _velMaxima; };
    int getPreco() { return _preco; };

    // METODOS - MUTANTES (setters)
    void setPlaca(string placa) { _placa = placa;};
    void setPeso(int peso) { _peso = peso;}
    void setVelMaxima(int velMaxima) { _velMaxima = velMaxima;};
    void setPreco(int preco) { _preco = preco;};

    // METODOS - GERAIS

    void imprimeDetalhes(){

        cout << "Placa.: " << _placa <<  endl;
        cout << "Peso.: " << _peso << " Kg" << endl;
        cout << "Velocidade Maxima.: " << _velMaxima << " Km/h" << endl;
        cout << "Preco.: R$ " << _preco << endl;

    }

private:

    string _placa;
    double _peso;
    double _velMaxima;
    double _preco;


};


#endif //_VEICULO_H
