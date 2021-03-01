#include "Producto.h"
#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;
void Producto :: agregaProducto(){
	cout<<"\n\n";
	cout<<"\tMorly:En este apartado puede complete los datos para registrar el producto correctamente"<<endl;
	cout<<"\n";
	cout<<"\tIngrese el Nombre del Producto : "; fflush(stdin); cin.getline(nomProducto,20,'\n');
	cout<<"\tIngrese la cantidad existente : "; cin>>cantExiste;
	cout<<"\tIngrese la categoria : "; fflush(stdin); cin.getline(categoria,20,'\n');
	cout<<"\tIngrese el precio unitario : "; cin>>precioUnitario;
	cout<<endl;
}

void Producto :: modificarProducto(){
	int op;
	cout<<"\n1. Nombre de Producto"<<endl;
	cout<<"2. Cantidad existente"<<endl;
	cout<<"3. Categoria"<<endl;
	cout<<"4. Precio Unitario"<<endl;
	cout<<"Seleccione una opcion[1-4]"; cin>>op;
		switch (op){
				case 1:
					cin.ignore();	
					cout<<"Ingrese el nuevo nombre del producto : "; cin.getline(nomProducto,20,'\n');
					break;
				case 2:
					cout<<"Ingrese la nueva cantidad existente : "; cin>>cantExiste;
					break;
				case 3:
					cin.ignore();
					cout<<"Ingrese la nueva categoria : "; cin.getline(categoria,20,'\n');
					break;
				case 4:
					cout<<"Ingrese el nuevo precio unitario : "; cin>>precioUnitario;
					break;
				default:
					cout<<"opcion invalida ";
					break;		
		}
}

void Producto::verProducto()
{
	cout<<left;
	cout<<setw(20)<<codProducto;
	cout<<setw(20)<<precioUnitario;
    cout<<setw(20)<<nomProducto;
    cout<<setw(20)<<cantExiste;
    cout<<setw(20)<<categoria;
	cout<<endl;
}

void Producto::asignarProveedor(Proveedor *prove){
	proveedor=prove;
}

void Producto::adicionarPedido(Pedido *pe){
	pedidos[numeropedidos]=pe;
	numeropedidos++;
}

int Producto::actualizarStock(){
	cout<<"\n";
    cout<<"\t"<<"Digite la cantidad de productos que necesita: ";
    cin>>cantSolicitada;
    if(cantSolicitada<=cantExiste){
        cantExiste=cantExiste-cantSolicitada;
    }
    return cantExiste;
}
