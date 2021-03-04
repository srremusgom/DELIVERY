#ifndef PRODUCTO_H
#define PRODUCTO_H
#include "Proveedor.h"
#include "Pedido.h"
class Pedido;
class Proveedor;

class Producto{
    protected:
        int codProducto;
        int precioUnitario;
        char nomProducto[20];
        int cantExiste;
        float pago;
        int numeropedidos;
        int cantSolicitada;
        char categoria[20];
        Proveedor* proveedor=NULL;
        Pedido* pedidos[50];
    public:
        void agregaProducto();
        void modificarProducto();
        int actualizarStock();
        void verProducto();
        void asignarProveedor(Proveedor*);
        void adicionarPedido(Pedido*);
        char* getnombre();
        float calcularPago();
};
#endif
