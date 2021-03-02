#include "Pedido.h"
using namespace std;

void Pedido::designarCliente(clienteBasico *c){
    cliente=c;
}

void Pedido::agregarProducto(Producto *prod){
	producto[contProducts]=prod;
	contProducts++;
}

void Pedido::agregarServicio(Servicios *serv){
	servicio[contServices]=serv;
	contServices++;
}

void Pedido :: verPedido(){
	
}
