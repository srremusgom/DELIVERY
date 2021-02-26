#include "Servicios.h"
#include <iostream>
#include <iomanip>
using namespace std;


void Servicios::agregarServicio(){
	cout<<"Digite el nombre del servicio:";
	fflush(stdin);
	gets(nomServicio);
	cout<<"Digite la disponibilidad del servicio:";
	cin>>dispExiste;
	cout<<"Digite el costo del servicio: ";
	cin>>pagoServicio;
}

void Servicios::modificarServicio(){
	
}

void Servicios::verServicio(){
	
}
