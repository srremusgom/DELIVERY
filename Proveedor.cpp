#include "Proveedor.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Proveedor::ingresarDatos(){
    cout<<"Ingrese su nombre:";
    fflush(stdin);
    gets(nombres);
    cout<<"Ingrese su apellido:";
    fflush(stdin);
    gets(apellidos);
    cout<<"Ingrese el nombre de su empresa:";
    fflush(stdin);
    gets(nombreEmpresa);
    cout<<"Ingrese su numero celular:";
    fflush(stdin);
    gets(telefono);
    cout<<"Ingrese su direccion:";
    fflush(stdin);
    gets(direccion);
    cout<<"Ingrese el ruc de su empresa:";
    fflush(stdin);
    gets(ruc);
}

void Proveedor::modificarProveedor(){
    int op;
	cout<<"Selecciones un dato a modificar: "<<endl;
	cout<<"1) Nombre"<<endl;
	cout<<"2) Apellido"<<endl;
    cout<<"3) Empresa"<<endl;
    cout<<"4) Telefono"<<endl;
	cout<<"5) Direccion"<<endl;
    cout<<"6) RUC"<<endl;
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
                    cout<<"Empresa : "; fflush(stdin); cin.getline(nombreEmpresa,20,'\n' );
                    break; 
                case 4:
                    cout<<"Telefono : "; fflush(stdin); cin.getline(telefono,20,'\n' );
					break;
				case 5:
					cin.ignore();
					cout<<"Direccion : "; cin.getline(direccion,20,'\n' );
					break;
                case 6:
					cin.ignore();
					cout<<"RUC : ";  cin.getline(ruc,20,'\n' );
					break;
				default:
					cout<<" opcion inv?lida ";
					break;		
		}
}

void Proveedor::mostrarDatos(){
    cout<<left;
	cout<<setw(20)<<nombres;
	cout<<setw(20)<<apellidos;
    cout<<setw(20)<<nombreEmpresa;
    cout<<setw(20)<<telefono;
    cout<<setw(20)<<direccion;
	cout<<setw(20)<<ruc;
	cout<<endl;
}
