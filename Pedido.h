#ifndef PEDIDO_H
#define PEDIDO_H
#include "clienteBasico.h"
#include "Producto.h"
class Servicios;
class Producto;
class Pedido{
	protected:
		int codigo=0;
		clienteBasico* cliente=NULL;
		Producto* producto[50];
		int contProducts=0;//variable contabiliza productos ya n rapido :0
		int dia;
		int mes;
		int anio;
	public:
		void verPedido();
		void designarCliente(clienteBasico*);
		void agregarProducto(Producto*);
		void generarfecha();
};

#endif
