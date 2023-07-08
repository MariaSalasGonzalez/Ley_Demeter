#include "Repartidor.h"

int main() {
    Billetera billetera1(2);
    Cliente miCliente(billetera1);
    Repartidor repartidor1;
    cout<<"El cliente 1 tiene: $"<<miCliente.getMiBilletera().getPlata()<<endl;

    cout<<repartidor1.recolectorPago(miCliente)<<endl;
    cout<<repartidor1.recolectorPago(miCliente)<<endl;


    cout<<"Despues de pagar 1 periodico el cliente 1 tiene: $"<<miCliente.getMiBilletera().getPlata()<<endl;
    return 0;
}
