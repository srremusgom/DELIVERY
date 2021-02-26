#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include "Usuario.h"

class Proveedor:Usuario{
    protected:
        int codProveedor;
        char nombreEmpresa[30];
        char direccion[30];
        char ruc[15];
        Producto* producto[30];
    public:
        void ingresarDatos();
        void mostrarDatos();
        void agregarProveedor();
        void modificarProveedor();
        void verProveedor();
};
#endif
