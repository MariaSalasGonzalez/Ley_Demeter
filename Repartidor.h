//
// Created by Ali Gonzalez on 15/8/20.
//

#ifndef LEY_DEMETER_REPARTIDOR_H
#define LEY_DEMETER_REPARTIDOR_H

#include "Cliente.h"
#include <stdio.h>
using namespace std;
class Repartidor {
private:
    float fondosCollectados;
public:
    Repartidor();
    string recolectorPago(Cliente&);
};


#endif //LEY_DEMETER_REPARTIDOR_H
