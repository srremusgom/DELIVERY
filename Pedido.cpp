#include "Pedido.h"
#include <iostream>
#include "Producto.h"
using namespace std;


void Pedido::designarCliente(clienteBasico *c){
    cliente=c;
}

void Pedido::agregarProducto(Producto *prod){
	producto[contProducts]=prod;
	contProducts++;
}


void Pedido :: verPedido(){
	for(int i=0;i<contProducts;i++){ 
	        cout<<producto[i]->getnombre(); 
	        cout<<" . ";
	}
	cout<<"La fecha: "<<dia<<"/"<<mes<<"/"<<anio;
}

void Pedido :: generarfecha(){
	cout<<"Ingrese el anio: "; cin>>anio;
	cout<<"Ingrese el mes: "; cin>>mes;
	cout<<"Ingrese el dia: "; cin>>dia;
}
