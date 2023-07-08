//
// Created by Ali Gonzalez on 15/8/20.
//

#include "Cliente.h"

Cliente::Cliente(const Billetera &miBilletera) : miBilletera(miBilletera) {}
Cliente::Cliente() {
    miBilletera=0;
}
const Billetera &Cliente::getMiBilletera() const {
    return miBilletera;
}

void Cliente::setMiBilletera(const Billetera &miBilletera) {
    Cliente::miBilletera = miBilletera;
}
float Cliente::pagar(float monto) {
    if(miBilletera.getPlata()>=monto){
        miBilletera.setPlata(miBilletera.getPlata()-monto);
        return monto;
    }else{
        return 0;
    }
}