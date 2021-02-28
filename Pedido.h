#ifndef PEDIDO_H
#define PEDIDO_H
#include "clienteBasico.h"
#include "Producto.h"
class Pedido
{
	protected:
		int codigo;
		clienteBasico* cliente=NULL;
		char fecha[15];
		Producto* producto[50];
		int contProducts=0;
	public:
		//void realizarPedido();
		void verPedido();
		void designarCliente(clienteBasico*);
		void agregarProducto(Producto*);
		//char* obtenerProducto();
		void generarfecha();
};

#endif
