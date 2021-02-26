#ifndef SERVICIOS_H
#define SERVICIOS_H

class Servicios{
    protected:
        char nomServicio[30];
        int dispExiste;
        int pagoServicio;
    public:
        void agregarServicio();
        void modificarServicio();
        void verServicio();
        void actualizarDisponibilidad();
};

#endif
