//
// Created by Ali Gonzalez on 15/8/20.
//

#include "Billetera.h"

Billetera::Billetera(float plata) : plata(plata) {}
Billetera::Billetera() {
    plata=0;
}
float Billetera::getPlata() const {
    return plata;
}

void Billetera::setPlata(float plata) {
    Billetera::plata = plata;
}
