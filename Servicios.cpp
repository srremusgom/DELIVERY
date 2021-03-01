#include "Servicios.h"
#include <iostream>
#include <iomanip>
#include <string.h>
using namespace std;


void Servicios::agregarServicio(){
	char op;
	cout<<"\n";
	cout<<"\tMorly: Se ha ingresado a la seccion para registrar servicios"<<endl;
	cout<<"\n";
	cout<<"\tMorly: Ingrese los datos que se solicitan"<<endl;
	cout<<"\n\n";
	cout<<"\n\tIngrese el tipo de oficio: ";
	fflush(stdin);
	gets(oficio);
	cout<<"\n\tIngrese el numero de servicios para el oficio de "<<oficio<<" :";
	cin>>nServicios;
	for(int i=0;i<nServicios;i++){
		cout<<"\n\tIngrese el nombre del servicio:";
		fflush(stdin);
		gets(nomServicio[i]);
		cout<<"\n";
		cout<<"\n\tIngrese el costo del servicio:";
		cin>>pagoServicio[i];
		cout<<"\n";
	}
	cout<<"\n\tMorly:Los servicios disponibles han sido registrados con exito";
}

void Servicios::modificarServicio(){
	
}

void Servicios::verServicio(){
	cout<<"\tMorly: Se ha ingresado a la seccion para ver los servicios disponibles"<<endl;
	cout<<"\n\t";
    cout<<left;
    cout<<setw(20)<<oficio;
	cout<<endl;
	for(int i=0;i<nServicios;i++){ 
		cout<<nomServicio[i];
		cout<<pagoServicio[i];
	}
}

void Servicios::adicionar_Pedido(Pedido *p){
	pedido[numpedidos]=p;
	numpedidos++;
}

void Servicios::actualizarDisponibilidad(){
	
}
