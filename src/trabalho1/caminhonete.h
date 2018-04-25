//
// Created by levys on 16/04/2018.
//

#ifndef _CAMINHONETE_H
#define _CAMINHONETE_H

#include "carro.h"
#include "caminhao.h"

class Caminhonete: public Carro, Caminhao {

public:
    

    void imprimeDetalhes(){

        cout << "Cor.: " << getCor() << endl;
        cout << "Modelo.: " << getModelo() << endl;
        cout << "Capacidade.: " << getCap() << " Toneladas" << endl;
        cout << "Comprimento.: " << getComp() << " Metros" << endl;
        cout << "Altura.: " << getAlt() << " Metros" << endl;

    }


};
#endif //_CAMINHONETE_H

