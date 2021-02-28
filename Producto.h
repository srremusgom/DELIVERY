#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "Proveedor.h"
#include "Pedido.h"

class Proveedor;
class Producto{
    protected:
        int codProducto;
        int precioUnitario;
        char nomProducto[20];
        int cantExiste;
        char categoria[20];
        Proveedor* proveedor=NULL;
        Pedido* pedidos[50];
    public:
        void agregaProducto();
        void modificarProducto();
        void actualizarCantidad();
        void verProducto();
        void asignarProveedor(Proveedor*);
};
#endif
