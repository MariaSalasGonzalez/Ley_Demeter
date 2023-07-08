//
// Created by Ali Gonzalez on 15/8/20.
//

#ifndef LEY_DEMETER_CLIENTE_H
#define LEY_DEMETER_CLIENTE_H
#include "Billetera.h"
#include <stdio.h>
class Cliente {
private:
    Billetera miBilletera;
public:
    Cliente(const Billetera &miBilletera);
    Cliente();

    const Billetera &getMiBilletera() const;

    void setMiBilletera(const Billetera &miBilletera);


    float pagar(float);
};


#endif //LEY_DEMETER_CLIENTE_H
