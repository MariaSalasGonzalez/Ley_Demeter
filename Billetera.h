//
// Created by Ali Gonzalez on 15/8/20.
//

#ifndef LEY_DEMETER_BILLETERA_H
#define LEY_DEMETER_BILLETERA_H

#include <iostream>
#include <stdio.h>
class Billetera {
private:
    float plata;
public:
    Billetera(float plata);
    Billetera();

    float getPlata() const;

    void setPlata(float plata);
};


#endif //LEY_DEMETER_BILLETERA_H
