#include <iostream>
#include "clienteBasico.h"
#include "Usuario.h"
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
    cout<<"\n\tIngrese su clave para su cuenta:";
    fflush(stdin);
    gets(clave);
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
    cout<<left;
	cout<<setw(20)<<nombres;
	cout<<setw(20)<<apellidos;
    cout<<setw(20)<<telefono;
    cout<<setw(20)<<edad;
	cout<<setw(20)<<dni;
    cout<<setw(20)<<direccion;
	cout<<endl;	
}

/*void clienteBasico::realizarPedido(){
	int op_solicitar;
	cout<<"\tMorly:¿Desea solicitar productos o servicios?";
	cout<<"\t1.Solicitar producto"<<endl;
	cout<<"\t2.Solicitar servicio"<<endl;
	cout<<"\t3.Regresar"<<endl;
	cout<<"\tMorly:Digite su opcion";
	cin>>op_solicitar;
	
	switch(op_solicitar){
		case 1:
			
			break;
		case 2:
			break;
	}	
}*/

char* clienteBasico::getClave(){
	return clave;
}
		

