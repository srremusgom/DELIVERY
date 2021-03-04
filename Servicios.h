#ifndef SERVICIOS_H
#define SERVICIOS_H
class Pedido;
class Proveedor;

class Servicios{
    protected:
        char nomServicio[50][30];
        int pagoServicio[50];
        int nServicios;
        char oficio[20];
        Pedido* pedido[50];
        int numpedidos;
        Proveedor* provee;    
    public:
        void agregarServicio();
        void modificarServicio();
        void verServicio();
        void actualizarDisponibilidad();
		void adicionar_Pedido(Pedido*);
		void asignarProvee(Proveedor*);
};

#endif
