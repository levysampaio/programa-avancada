//
// Created by levys on 25/04/2018.
//

#ifndef _CLIENTE_H
#define _CLIENTE_H


#include <string>

using namespace std;

class Cliente{



public:

    Cliente(): _nome(""){};
    Cliente(string nome): _nome(nome){};


    void setNome( string nome){ _nome = nome;};

    string getNome(){ return _nome;};



private:

    string _nome;

};

#endif //_CLIENTE_H
