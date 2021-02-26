#ifndef SERVICIOS_H
#define SERVICIOS_H

class Servicios{
    protected:
        char nomServicio[3][30];
        int pagoServicio[3];
        int nServicios;
        char oficio[20];
    public:
        void agregarServicio();
        void modificarServicio();
        void verServicio();
        void actualizarDisponibilidad();
};
#endif
