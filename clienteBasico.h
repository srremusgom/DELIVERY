#ifndef CLIENTEBASICO_H
#include <iostream>
#define CLIENTEBASICO_H
#include "Usuario.h"

class clienteBasico:Usuario
{
	protected:
		char dni[15];
        char direccion[30];
	public:
		void ingresarDatos();
        void mostrarDatos();
        void realizarPedido();
        void modificar();
        void verPedido();
};

#endif
