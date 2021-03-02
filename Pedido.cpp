#include "Pedido.h"

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
	ofstream archivo;
	archivo.open("ListaPedido.txt",ios::app);
	archivo<<codigo<<" "<<fecha<<" "<<producto<<" "<<servicio<<endl;
             
	archivo.close();
}
