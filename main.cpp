#include <iostream>
#include "Usuario.h"
#include "Producto.h"
#include "clienteBasico.h"
#include "Proveedor.h"
#include "Servicios.h"
#include "buscador.h"
#include <string.h>
#include <iomanip>

using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	Producto listofproducts[100];
	Proveedor listofsuppliers[50];
	clienteBasico listofclients[50];
	Servicios listofservices[50];
	Pedido listoforders[50];
	int nproducts=0,nsuppliers=0,nclients=0,norders=0,nservices=0,nP=0,nS=0;
	int op_tipouser,opmenuA,opmenuB,op,orden=0,dato_modificar/*account*/;
	char password[9],user[10],op_agregar;
	char passwordreal[]="admin123";
	bool check;
	system("CLS");
	cout<<"\n\n\tMorly:Bienvenido!"<<endl;
	cout<<"\tMorly:Para mejorar su experiencia en la aplicacion...."<<endl;
	cout<<"\tMorly:Y asegurar que el pedido sea de forma correcta se me asignara como su asistente...."<<endl;
	cout<<"\tMorly:Empezemos..."<<endl ;
	do{
		cout<<"\tMorly:Necesito saber si quiere ingresar como administrador o cliente"<<endl;cout<<"\n";
		cout<<"\t\t1.Usuario Administrador"<<endl;
		cout<<"\t\t2.Usuario Cliente"<<endl;
		cout<<"\t\t0.Salir";
		cout<<"\n\n";
		cout<<"\tMorly:Ingrese su opcion--->";cin>>op_tipouser;
		switch(op_tipouser){
			case 1:
				system("CLS");
				cout<<"\n\n";
				if(op_tipouser==1){
					do{
						cout<<"\tMorly:Para ingresar al usuario Administrador se requiere la clave de administradores!!"<<endl;//admin123
						cout<<"\n\tMorly:Ingrese la clave--->";
						fflush(stdin);
						gets(password);
						if(strcmp(password,passwordreal)==0){
							cout<<"\n\tMorly:En hora buena!.La clave es correcta"<<endl;
							check=true;
							system("CLS");
							cout<<"\tMorly:Las opciones para administrador son las siguientes: ";
							cout<<"\t1.Ingresar a la seccion de productos";
							cout<<"\t2.Ingresar a la seccion de proveedores";
							cout<<"\t0.Salir de la seleccion para administradores";
							cin>>op;
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
												//if(nsuppliers!=0){
													do{
														system("CLS");
														cout<<"\n\n";
														cout<<"\tMorly:Ingrese el orden del proveedor para asignarle";
														cin>>orden;
													}while(nsuppliers<orden or orden==0);
													listofproducts[nproducts].asignarProveedor(&listofsuppliers[orden-1]);
													listofsuppliers[orden-1].agregarProducto(&listofproducts[nproducts]);
													nproducts++;
													cout<<"\tMorly:El producto ha sido registrado con exito";
												//}
												break;
											case 2:
												//if(nproducts!=0){
													do{
														cout<<"\tMorly:Se mostrara los datos de los productos registrados hasta el momento";
														cout<<"\tMorly:Ingrese el numero de orden del producto para modificar:";
														cin>>dato_modificar;
													}while(nproducts<dato_modificar or dato_modificar==0);
													listofproducts[dato_modificar-1].modificarProducto();
													cout<<"\tMorly:El producto ha sido modificado con exito";
												//}
												break;
											case 3:
												//ver
												break;
											case 0:
												cout<<"\tMorly:Regresando...";		
												break;
											default:
												cout<<"\tMorly:La opcion ingresada no se encuentra en el menu";
												break;
										}	
									}while(opmenuA!=0);
									break;
								case 2:
									do{
										system("CLS");
										cout<<"\n\n";
										cout<<"\tMorly:Se presentan las opciones posibles en el apartado de productos"<<endl;
										cout<<"\t1.Registrar proveedor en la aplicacion";
										cout<<"\t2.Modificar proveedor en la aplicacion";
										cout<<"\t3.Ver proveedores en la aplicacion";
										cout<<"\t0.Salir del apartado proveedores";
										cout<<"\tMorly:Ingrese una opcion..";
										cin>>opmenuA;
										switch(opmenuB){
											case 1:
												listofsuppliers[nsuppliers].ingresarDatos();
												nsuppliers++;
												system("PAUSE");
												break;
											case 2:
												//if(nsuppliers!=0){
													do{
														cout<<"\tMorly:Se mostrara los datos de los proveedores registrados hasta el momento";
														cout<<"\tMorly:Ingrese el numero de orden del proveedor para modificar:";
														cin>>dato_modificar;
													}while(nsuppliers<dato_modificar or dato_modificar==0);
													listofsuppliers[dato_modificar-1].modificarDatos();
													cout<<"\tMorly:El proveedor ha sido modificado con exito";
												//}
												break;
											case 3:
												//ver
												break;
											case 0:
												cout<<"\tMorly:Regresando...";		
												break;
											default:
												cout<<"\tMorly:La opcion ingresada no se encuentra en el menu";
												break;
										}	
									}while(opmenuB!=0);
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
				int account;
				do{
					system("CLS");
					cout<<"\n\n";
					cout<<"\tMorly:Listo para hacer su pedido?";
					cout<<"\tMorly:Antes de realizar su pedido necesito saber si ya tiene una cuenta registrada en nuestra aplicacom";
					cout<<"Ingrese 1:Si, tengo una cuenta registrada";
					cout<<"Ingrese 2:No, recien me descargue la aplicacion";
					cin>>account;
					switch(account){
						case 1:			
							cout<<"\tMorly:Ingrese el nombre el cual se registro para comprobar si la cuenta existe";
							fflush(stdin);
							gets(user);
							
							
							int op_solicitar;
							cout<<"\tMorly:¿Desea solicitar productos o servicios?";
							cout<<"\t1.Solicitar pedido de producto y/o servicio"<<endl;
							cout<<"\t2.Regresar"<<endl;
							cout<<"\tMorly:Digite su opcion";
							cin>>op_solicitar;
							
							switch(op_solicitar){
								case 1:
									int ord;
									do{
										cout<<"\tMorly:Se mostrara la lista de productos disponibles a continuacion";
										cout<<"\n"<<"\t"<<"Ingrese el orden del producto para asignarle a su pedido: ";
						                cin>>ord;
						                listoforders[norders].agregarProducto(&listofproducts[ord-1]);
						                listofproducts[ord-1].adicionarPedido(&listoforders[norders]);
						                for(int i=0;i<nproducts;i++){
						                	if(i==ord-1){
						                		listofproducts[i].actualizarStock();
											}
										}
										cout<<"\n\n"<<"\t"<<"Desea agregar otro producto al pedido actual[S/N]?"<<endl;
                                    	cout<<"\n\n"<<"\t"<<"Ingrese su eleccion: ";cin>>op_agregar;
                                    	nP++;
									}while(nP<=100 && op_agregar!='N');	
									
									do{
										cout<<"\tMorly:Se mostrara la lista de servicios disponibles a continuacion";
										cout<<"\n"<<"\t"<<"Ingrese el orden del servicio para asignarle a su pedido: ";
										cin>>ord;
										listoforders[norders].agregarServicio(&listofservices[ord-1]);
										listofservices[ord-1].adicionar_Pedido(&listoforders[norders]);
										for(int i=0;i<nservices;i++){
											if(i==ord-1){
												listofservices[i].actualizarDisponibilidad();
											}
										}
										cout<<"\n\n"<<"\t"<<"Desea agregar otro servicio al pedido actual[S/N]?"<<endl;
                                    	cout<<"\n\n"<<"\t"<<"Ingrese su eleccion: ";cin>>op_agregar;
                                    	nS++;
									}while(nS<=20 && op_agregar!='N');
									norders++;			
									break;
									
								case 2:
									
									
									break;
							}	
							
							system("PAUSE");
							break;
						case 2:
							char op_modificar;
							cout<<"\tMorly:Procederemos a crear una cuenta....";
							listofclients[nclients].ingresarDatos();
							nclients++;
						
							/*cout<<"\tMorly:Si se ha equivocado en algun dato al momento de registrarse...";
							cout<<"\tMorly:Digite [S], de lo contrario presione cualquier tecla";
							cin>>op_modificar;
							if(op_modificar==S){
								do{
									cout<<"\tMorly:Se mostrara los datos de los clientes registrados hasta el momento";
									cout<<"\tMorly:Ingrese el numero de orden del clientes para modificar:";
									cin>>dato_modificar;
								}while(nproducts<dato_modificar or dato_modificar==0);
								
								listofclients[dato_modificar-1].modificarDatos();
								cout<<"\tMorly:El cliente ha sido modificado con exito";*/
								
							break;
					}

				}while(account!=0);
	
				break;
		}
		
	}while(op_tipouser!=0);

	system("PAUSE");
	return 0;
}
