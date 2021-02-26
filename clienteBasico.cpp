#include <iostream>
#include "clienteBasico.h"
#include <string.h>
#include <iomanip>
using namespace std;

void clienteBasico::ingresarDatos(){
	
	
    cout<<"Ingrese su nombre:";
    fflush(stdin);
    gets(nombres);
    cout<<"Ingrese su apellido:";
    fflush(stdin);
    gets(apellidos);
    cout<<"Ingrese su numero celular:";
    fflush(stdin);
    gets(telefono);
    cout<<"Ingrese su edad:";
    cin>>edad;
    cout<<"Ingrese su dni:";
    fflush(stdin);
    gets(dni);
    cout<<"Ingrese su direccion:";
    fflush(stdin);
    gets(direccion);
}

void clienteBasico::modificar(){
    int op;
	cout<<"Selecciones un dato a modificar: "<<endl;
	cout<<"1) Nombre"<<endl;
	cout<<"2) Apellido"<<endl;
    cout<<"3) Telefono"<<endl;
    cout<<"4) Edad"<<endl;
	cout<<"5) DNI"<<endl;
	cout<<"6) Direccion"<<endl;
	cin>>op;
		switch (op){
				case 1:
					cin.ignore();	
					cout<<"Nombres : "; cin.getline(nombres,20,'\n');
					break;
				case 2:
					cin.ignore();
					cout<<"Apellidos  : "; cin.getline(apellidos,20,'\n');
					break;
				case 3:
                    cout<<"Telefono : "; fflush(stdin); cin.getline(telefono,20,'\n' );
					break;
                case 4:
                    cout<<"Edad : "; fflush(stdin); cin>>edad;
                    break;
				case 5:
					cin.ignore();
					cout<<"DNI : ";  cin.getline(dni,20,'\n' );
					break;
				case 6:
					cin.ignore();
					cout<<"Direccion : "; cin.getline(direccion,20,'\n' );
					break;
				default:
					cout<<" opcion inv?lida ";
					break;		
		}	
}

void clienteBasico::mostrarDatos(){
    cout<<left;
	cout<<setw(20)<<nombres;
	cout<<setw(20)<<apellidos;
    cout<<setw(20)<<telefono;
    cout<<setw(20)<<edad;
	cout<<setw(20)<<dni;
    cout<<setw(20)<<direccion;
	cout<<endl;
}
