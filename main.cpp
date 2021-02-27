#include <iostream>
#include "Usuario.h"
#include "clienteBasico.h"
#include "Proveedor.h"
#include "Servicios.h"
#include <string.h>
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	int op_tipouser;
	char password[9];
	char passwordreal[]="admin123";
	bool check;
	system("CLS");
	cout<<"\tMorly:Bienvenido!"<<endl;
	cout<<"\tMorly:Para mejorar su experiencia en la aplicación...."<<endl;
	cout<<"\tMorly:Y asegurar que el pedido sea de forma correcta se me asignara como su asistente...."<<endl;
	cout<<"\tMorly:Empezemos..."<<endl ;
	do{
		cout<<"\tMorly:Necesito saber si quiere ingresar como administrador o cliente:"<<endl;
		cout<<"\t1.Usuario Administrador"<<endl;
		cout<<"\t2.Usuario Cliente"<<endl;
		cout<<"\t0.Salir";
		cout<<"\tMorly:Ingrese su opcion:";cin>>op_tipouser;
		switch(op_tipouser){
			case 1:
				if(op_tipouser==1){
					do{
						cout<<"\tMorly:Para ingresar al usuario Administrador se requiere la contraseña de administradores";//admin123
						fflush(stdin);
						gets(password);
						if(strcmp(password,passwordreal)==0){
							cout<<"\tMorly:La contraseña es correcta"<<endl;
							check=true;
						}
						else{
							cout<<"\tMorly:La contraseña es incorrecta"<<endl;
						}
					}while(check!=true);	
				}
				
				break;
			case 2:
				break;
		}
	}while(op_tipouser!=0);


	
	
	
	
	system("PAUSE");
	return 0;
}
