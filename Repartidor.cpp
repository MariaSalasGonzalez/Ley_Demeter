//
// Created by Ali Gonzalez on 15/8/20.
//

#include "Repartidor.h"



Repartidor::Repartidor() {
    fondosCollectados=0;
}
string Repartidor::recolectorPago(Cliente &miCliente) {
    float cobrar=2;
    if(miCliente.pagar(cobrar)==cobrar){
        fondosCollectados+=cobrar;
        return "Pagado";
    }else{}
    return "Fondos Insuficientes";
}