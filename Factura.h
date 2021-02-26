#ifndef FACTURA_H
#define FACTURA_H

class Factura{
    protected:
        int codFactura;
        char fecha[30];
        int pagoTotal;
    public:
        void generarFactura();
        void verFactura();
        void asignarCliente();
        void asignarProducto();
};

#endif
