#ifndef PROVEEDOR_H
#define PROVEEDOR_H
#include "Usuario.h"
#include "Producto.h"
#include "Servicios.h"
class Producto;
class Proveedor:Usuario{
    protected:
        int codProveedor;
        char nombreEmpresa[30];
        char direccion[30];
        char ruc[15];
        Producto* producto[50];
        Servicios* serv[50];
        int nProductos=0;
        int nProveedores=0;
        int nServices=0;
    public:
        void ingresarDatos();
        void mostrarDatos();
        void modificarDatos();
        void agregarProducto(Producto*);
        void agregarServicio(Servicios*);
};
#endif
