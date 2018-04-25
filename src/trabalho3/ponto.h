//
// Created by levys on 25/04/2018.
//

#ifndef _PONTO_H
#define _PONTO_H

#include <iostream>
#include <string>

using namespace std;

class Ponto {

public:

    // CONSTRUTORES
    Ponto():_x(0.0),_y(0.0){};


    Ponto(double x, double y):_x(x),_y(y){};

    void imprime(){cout << "(" <<_x << "," << _y <<")" << endl;}


    //MÉTODOS

    Ponto operator +(Ponto ponto){
        return Ponto(_x + ponto._x, _y + ponto._y);
    }


    Ponto operator -(Ponto ponto){
        return Ponto(_x - ponto._x, _y - ponto._y);
    }

    Ponto operator *(Ponto ponto){
        return Ponto(_x * ponto._x, _y * ponto._y);
    }

    Ponto operator *(double escalar){
        return Ponto(_x * escalar, _y * escalar);
    }

    double operator [] (int indice) {
        if (indice == 0) return _x;
        if (indice == 1) return _y;

        return -999;
    }


private:
    //VARIÁVEIS
    double _x;
    double _y;


};


#endif //_PONTO_H
