#include <iostream>
#include "Usuario.h"
#include "Producto.h"
#include "clienteBasico.h"
#include "Proveedor.h"
#include "Servicios.h"
#include <string.h>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Producto listofproducts[100];
	int nproducts,nsuppliers;
	int op_tipouser,opmenuA,op,orden=0;
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
						cout<<"\tMorly:Para ingresar al usuario Administrador se requiere la clave de administradores";//admin123
						fflush(stdin);
						gets(password);
						if(strcmp(password,passwordreal)==0){
							cout<<"\tMorly:La clave es correcta"<<endl;
							check=true;
							cout<<"\tMorly:Las opciones para administrador son las siguientes: ";
							cout<<"\t1.Ingresar a la seccion de productos";
							cout<<"\t2.Ingresar a la seccion de proveedores";
							cout<<"\t0.Salir de la seleccion para administradores";
							switch(op){
								case 1:
									do{
										system("CLS");
										cout<<"\n\n";
										cout<<"\tMorly:Se presentan las opciones posibles en el apartado de productos"<<endl;
										cout<<"\t1.Registrar producto en la aplicacion";
										cout<<"\t2.Modificar producto en la aplicacion";
										cout<<"\t3.Ver producto en la aplicacion";
										cout<<"\t0.Salir del apartado productos";
										cout<<"\tMorly:Ingrese una opcion..";
										cin>>opmenuA;
										switch(opmenuA){
											case 1:
												listofproducts[nproducts].agregaProducto();
												if(nsuppliers!=0){
													do{
														system("CLS");
														cout<<"\n\n";
														cout<<"\tMorly:Ingrese el orden del proveedor para asignarle";
														cin>>orden;
													}while(nsuppliers<orden or orden==0);
													//listofproducts[nproducts].
												}
											break;	
										}
										
									}while(opmenuA!=0);
									break;
								case 2:
									break;
							}
						}
						else{
							cout<<"\tMorly:La clave es incorrecta"<<endl;
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
