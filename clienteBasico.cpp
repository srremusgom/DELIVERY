#include <iostream>
#include "clienteBasico.h"
#include "Usuario.h"
#include <fstream>
#include <string.h>
#include <iomanip>
using namespace std;

void clienteBasico::ingresarDatos(){
	cout<<"\n";
	cout<<"\tMorly: Se ha ingresado a la seccion para registrar su cuenta"<<endl;
	cout<<"\n";
	cout<<"\tMorly: Ingrese los datos que se solicitan"<<endl;
	cout<<"\n\n";
    cout<<"\n\tIngrese su nombre:";
    fflush(stdin);
    gets(nombres);
    cout<<"\n\tIngrese su apellido:";
    fflush(stdin);
    gets(apellidos);
    cout<<"\n\tIngrese su numero celular:";
    fflush(stdin);
    gets(telefono);
    cout<<"\n\tIngrese su edad:";
    cin>>edad;
    cout<<"\n\tIngrese su dni:";
    fflush(stdin);
    gets(dni);
    cout<<"\n\tIngrese su direccion:";
    fflush(stdin);
    gets(direccion);
    cout<<"\n";
    cout<<"\tMorly: Su cuenta ha sido registrada con exito"<<endl;
    nClientes++;
}

void clienteBasico::modificarDatos(){
    int op;
    char opcion;
    
	cout<<"1) Nombre"<<endl;
	cout<<"2) Apellido"<<endl;
    cout<<"3) Telefono"<<endl;
    cout<<"4) Edad"<<endl;
	cout<<"5) DNI"<<endl;
	cout<<"6) Direccion"<<endl;
	
		do{
			cout<<"\tMorly: Ingrese la opcion del dato para modificar: ";
			cin>>op;
			switch (op){
				case 1:
					cin.ignore();
					cout<<"\tMorly:Ingrese su nombre: "; cin.getline(nombres,20,'\n');
					break;
				case 2:
					cin.ignore();
					cout<<"\tMorly:Ingrese su apellido: "; cin.getline(apellidos,20,'\n');
					break;
                case 3:
                    cout<<"\tMorly:Ingrese su numero celular: "; fflush(stdin); cin.getline(telefono,20,'\n' );
					break;
				case 4:
					cout<<"\tMorly:Ingrese su edad: "; cin>>edad;
					break;
				case 5:
					cin.ignore();
					cout<<"\tMorly:Ingrese su DNI: ";  cin.getline(dni,20,'\n' );
					break;
                case 6:
					cin.ignore();
					cout<<"\tMorly:Ingrese su direccion: "; cin.getline(direccion,20,'\n' );
					break;
				default:
					cout<<"\tMorly:La opcion ingresada no existe. Ingrese nuevamente";
					break;					
			}
			cout<<"\tMorly:¿Desea modificar otro dato de su cuenta(S/N)?";
			cin>>opcion;
			
			
		}while(opcion!='N');
}

void clienteBasico::mostrarDatos(){
	ofstream archivo;
	archivo.open("ListaCliente.txt",ios::app);
	archivo<<nombres<<" "<<apellidos<<" "<<telefono<<" "<<dni<<" "<<direccion<<" "<<endl;
             
	archivo.close();
}


char* clienteBasico::getDNI(){
	return dni;
}

char* clienteBasico::getName(){
	return nombres;
}
char* clienteBasico::getApellido(){
	return apellidos;
}
		

