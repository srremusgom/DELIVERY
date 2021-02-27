#ifndef CLIENTEBASICO_H
#define CLIENTEBASICO_H
#include <iostream>
#include "Usuario.h"
using namespace std;

class clienteBasico:Usuario
{
	protected:
		char dni[15];
        char direccion[30];
	public:
		void ingresarDatos();
		void modificarDatos();
        void mostrarDatos();
        void realizarPedido();
};
#endif
