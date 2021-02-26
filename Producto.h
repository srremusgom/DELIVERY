#ifndef PRODUCTO_H
#define PRODUCTO_H

class Producto{
    protected:
        int codProducto;
        int precioUnitario;
        char nomProducto[20];
        int cantExiste;
        char categoria[20];
    public:
        void agregaProducto();
        void modificarProducto();
        void actualizarCantidad();
        void verProducto();
};
#endif
