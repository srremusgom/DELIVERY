#ifndef USUARIO_H
#define USUARIO_H

class Usuario
{
	protected:
		char nombres[30];
        char apellidos[30];
        char telefono[10];
        int edad;
	public:
		Usuario();
        virtual void ingresarDatos()=0;
        virtual void mostrarDatos()=0;
        virtual void modificarDatos()=0;
};
#endif
