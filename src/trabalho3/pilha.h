//
// Created by levys on 25/04/2018.
//

#ifndef _PILHA_H
#define _PILHA_H

#include <string>
#include <iostream>

using namespace std;

class Pilha {

public:
    //CONSTRUTORES

    Pilha():_tamanho(100){
            _pilha = (string*) malloc(100*sizeof(string));
            _tamanho = 0;

        free(_pilha);
    };

    Pilha(int tamanho): _tamanho(tamanho){

        _pilha = (string*) malloc(tamanho*sizeof(string));

        free(_pilha);
    };

    //MÉTODOS
    void empilha(string item){

        _pilha[_tamanho+1] = item;
        _tamanho++;
    }

    string desempilha(){

        string item = _pilha[_tamanho];
        _tamanho--;
        return item;
    }

    int tamanho(){return _tamanho;};

    void imprime(){

        for(int i=_tamanho; i>0; i--){
            cout << _pilha[i] << endl;
        }
    }

    //SOBRECARGA
    void operator +=(string item){this->empilha(item);};

    string operator --(){return this->desempilha();};

private:
    //VARIÁVEIS

    int _tamanho;

    string *_pilha;
};


#endif //_PILHA_H
