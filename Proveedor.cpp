#include "Proveedor.h"
#include <iostream>
#include <iomanip>
using namespace std;

void Proveedor::ingresarDatos(){
	cout<<"\n";
	cout<<"\tMorly: Se ha ingresado a la seccion para registrar proveedores"<<endl;
	cout<<"\n";
	cout<<"\tMorly: Ingrese los datos que se solicitan"<<endl;
	cout<<"\n\n";
    cout<<"\tIngrese el nombre del proveedor:";
    fflush(stdin);
    gets(nombres);
    cout<<"\n\tIngrese el apellido del proveedor:";
    fflush(stdin);
    gets(apellidos);
    cout<<"\n\tIngrese el nombre de la empresa:";
    fflush(stdin);
    gets(nombreEmpresa);
    cout<<"\n\tIngrese el numero de contacto:";
    fflush(stdin);
    gets(telefono);
    cout<<"\n\tIngrese la direccion de la empresa: ";
    fflush(stdin);
    gets(direccion);
    cout<<"\n\tIngrese el ruc de la empresa:";
    fflush(stdin);
    gets(ruc);
    cout<<"\n";
    cout<<"\tMorly: El proveedor ha sido registrado con exito"<<endl;
}

void Proveedor::modificarProveedor(){
    int op;
    char opcion;
    cout<<"\n";
	cout<<"\tMorly: Se ha ingresado a la seccion para modificar proveedores"<<endl;
	cout<<"\n";
	cout<<"\n\t1) Nombre"<<endl;
	cout<<"\n\t2) Apellido"<<endl;
    cout<<"\n\t3) Empresa"<<endl;
    cout<<"\n\t4) Telefono"<<endl;
	cout<<"\n\t5) Direccion"<<endl;
    cout<<"\n\t6) RUC"<<endl;
    cout<<"\n";

		do{
			cout<<"\tMorly: Ingrese la opcion del dato para modificar: ";
			cin>>op;
			switch (op){
				case 1:
					cin.ignore();
					cout<<"\tMorly:Ingrese el nombre: "; cin.getline(nombres,20,'\n');
					break;
				case 2:
					cin.ignore();
					cout<<"\tMorly:Ingrese el apellido: "; cin.getline(apellidos,20,'\n');
					break;
				case 3:
                    cout<<"\tMorly:Ingrese el nombre de la empresa: "; fflush(stdin); cin.getline(nombreEmpresa,20,'\n' );
                    break; 
                case 4:
                    cout<<"\tMorly:Ingrese el numero de contacto: "; fflush(stdin); cin.getline(telefono,20,'\n' );
					break;
				case 5:
					cin.ignore();
					cout<<"\tMorly:Ingrese la direccion de la empresa: "; cin.getline(direccion,20,'\n' );
					break;
                case 6:
					cin.ignore();
					cout<<"\tMorly:Ingrese el RUC: ";  cin.getline(ruc,20,'\n' );
					break;
				default:
					cout<<"\tMorly:La opcion ingresada no existe. Ingrese nuevamente";
					break;					
			}
			cout<<"\tMorly:¿Desea modificar otro dato del registro proveedor(S/N)?";
			cin>>opcion;
			
			
		}while(opcion!='N');
		
}

void Proveedor::mostrarDatos(){
	
	cout<<"\tMorly: Se ha ingresado a la seccion para ver los proveedores"<<endl;
	cout<<"\n\t";
    cout<<left;
	cout<<setw(20)<<nombres;
	cout<<setw(20)<<apellidos;
    cout<<setw(20)<<nombreEmpresa;
    cout<<setw(20)<<telefono;
    cout<<setw(20)<<direccion;
	cout<<setw(20)<<ruc;
	cout<<endl;
}
