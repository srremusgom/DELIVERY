#include <iostream>
#include <conio.h>;
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
	Producto listofproducts[100];//lista de productos
	Proveedor listofsuppliers[50];//lista de proveedores
	clienteBasico listofclients[50];//lista de clientes
	Servicios listofservices[50];//lista de servicios
	Pedido listoforders[50];//lista de pedidos
	int nproducts=0,nsuppliers=0,nclients=0,norders=0,nservices=0,nP=0,nS=0,v=0,indice,comprobador;
	int op_tipouser,opmenuA,opmenuB,opmenuC,op,orden=0,dato_modificar/*account*/;
	char password[9],user[10],op_agregar,dniCom[15];
	char passwordreal[]="admin123";
	bool check;
	system("CLS");
	cout<<"\n\n\tMorly:Bienvenido!"<<endl;
	cout<<"\tMorly:Para mejorar su experiencia en la aplicacion...."<<endl;
	cout<<"\tMorly:Y asegurar que el pedido sea de forma correcta se me asignara como su asistente...."<<endl;
	cout<<"\tMorly:Empezemos..."<<endl ;
	system("PAUSE");
	do{
		system("CLS");
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
					do{
						system("CLS");
						cout<<"\tMorly:Para ingresar al usuario Administrador se requiere la clave de administradores!!"<<endl;//admin123
						cout<<"\n\tMorly:Ingrese la clave--->";
						for(int i=0;i<30;i++){
							v=getch();
							if((v>='a')&&(v<='z')or(v>='A')&&(v<='Z')or(v>='0')&&(v<='9')or(v==' ')){
								password[i]=v;
								cout<<"*";
							}
							if(v=='\r'){
								password[i]='\0';
								break;
							}
						}	
						cout<<endl;				
						if(strcmp(password,passwordreal)==0){
							cout<<"\n\tMorly:En hora buena!.La clave es correcta"<<endl;
							check=true;
							system("CLS");
							cout<<"\n\n";
							cout<<"\tMorly:Las opciones para administrador son las siguientes: "<<endl;
							cout<<"\n";
							cout<<"\t\t1.Ingresar a la seccion de productos"<<endl;
							cout<<"\t\t2.Ingresar a la seccion de proveedores"<<endl;
							cout<<"\t\t3.Ingrese a la seccion de pedidos"<<endl;
							cout<<"\t\t0.Salir de la seleccion para administradores"<<endl;
							cout<<"\n\tMorly:Ingrese su opcion--->";
							cin>>op;
							switch(op){
								case 1:
									do{
										system("CLS");
										cout<<"\n\n";
										cout<<"\tMorly:Se presentan las opciones posibles en el apartado de productos"<<endl;
										cout<<"\n";
										cout<<"\t\t1.Registrar producto en la aplicacion"<<endl;
										cout<<"\t\t2.Modificar producto en la aplicacion"<<endl;
										cout<<"\t\t3.Ver producto en la aplicacion"<<endl;
										cout<<"\t\t0.Salir del apartado productos"<<endl;
										cout<<"\n\tMorly:Ingrese su opcion--->";cin>>opmenuA;
										switch(opmenuA){
											case 1:
												system("CLS");
												listofproducts[nproducts].agregaProducto();
												if(nsuppliers!=0){
													do{
														system("CLS");
														for(int i=0;i<nsuppliers;i++){
                                                			cout<<"\t"<<left<<setw(3)<<i+1;
                                                			listofsuppliers[i].mostrarDatos();
                                            			}
														
														cout<<"\n\n";
														cout<<"\tMorly:Ingrese el orden del proveedor para asignarle";
														cin>>orden;
													}while(nsuppliers<orden or orden==0);
													listofproducts[nproducts].asignarProveedor(&listofsuppliers[orden-1]);
													listofsuppliers[orden-1].agregarProducto(&listofproducts[nproducts]);
													nproducts++;
													cout<<"\tMorly:El producto ha sido registrado con exito";
												}
												else{
													cout<<"\tMorly:No hay proveedores disponibles actualmente"<<endl;
													system("PAUSE");
												}
												break;
											case 2:
												cout<<nproducts;
												system("PAUSE");
												if(nproducts!=0){
													do{
														cout<<"\tMorly:Se mostrara los datos de los productos registrados hasta el momento"<<endl;
														for(int i=0;i<nproducts;i++){	
															listofproducts[i].verProducto();
														}
														cout<<"\n";
														cout<<"\tMorly:Ingrese el numero de orden del producto para modificar:";
														cin>>dato_modificar;
													}while(nproducts<dato_modificar or dato_modificar==0);
													listofproducts[dato_modificar-1].modificarProducto();
													cout<<"\tMorly:El producto ha sido modificado con exito";
													system("PAUSE");
												}
												break;
											case 3:
												
			                                        system("PAUSE");
												break;
											case 0:
												system("CLS");
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
										cout<<"\tMorly:Se presentan las opciones posibles en el apartado de proveedores"<<endl;
										cout<<"\n";
										cout<<"\t\t1.Registrar proveedor en la aplicacion"<<endl;
										cout<<"\t\t2.Modificar proveedor en la aplicacion"<<endl;
										cout<<"\t\t3.Ver proveedores en la aplicacion"<<endl;
										cout<<"\t\t0.Salir del apartado proveedores"<<endl;
										cout<<"\n";
										cout<<"\tMorly:Ingrese una opcion: ";
										cin>>opmenuB;
										switch(opmenuB){
											case 1:
												system("CLS");
												listofsuppliers[nsuppliers].ingresarDatos();
												nsuppliers++;
												system("PAUSE");
												break;
											case 2:
												system("CLS");
												if(nsuppliers!=0){
													do{
														cout<<"\tMorly:Se mostrara los datos de los proveedores registrados hasta el momento"<<endl;
														for(int i=0;i<nsuppliers;i++){	
															listofsuppliers[i].mostrarDatos();
														}
														cout<<"\tMorly:Ingrese el numero de orden del proveedor para modificar:";
														cin>>dato_modificar;
													}while(nsuppliers<dato_modificar or dato_modificar==0);
													listofsuppliers[dato_modificar-1].modificarDatos();
													cout<<"\tMorly:El proveedor ha sido modificado con exito"<<endl;
												}
												break;
											case 3:
												for(int i=0;i<nsuppliers;i++){	
													listofsuppliers[i].mostrarDatos();
												}
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
								case 3://pedidos administrador
									system("CLS");
									do{

								
									}while(opmenuC!=0);//
								break;		
							}
					}
						else{
							cout<<"\tMorly:La clave es incorrecta"<<endl;
							system("PAUSE");
						}
					}while(check!=true);	
				
				break;
			case 2:
				int account;
				int op_solicitar;
				do{
					system("CLS");
					cout<<"\n\n";
					cout<<"\tMorly:Listo para hacer su pedido?"<<endl;
					cout<<"\tMorly:Antes de realizar su pedido necesito saber si ya tiene una cuenta registrada en nuestra aplicacion"<<endl;
					cout<<"\tIngrese 1:Si, tengo una cuenta registrada"<<endl;
					cout<<"\tIngrese 2:No, recien me descargue la aplicacion"<<endl;
					cin>>account;
					switch(account){
						case 1:			
							cout<<"\tMorly:Ingrese el dni el cual se registro para comprobar si la cuenta existe"<<endl;
							fflush(stdin);
							cin>>dniCom;
							
							for(int i=0;i<nclients;i++){
								if(strcmp(dniCom,listofclients[i].getDNI())==0){
										indice=i;
										comprobador=1;
								}	
							}
							if(comprobador==1){
								cout<<"Bienvenido ";
								cout<<listofclients[indice].getName()<<endl;
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
							                cin>>ord;//con eso se le asigno los productos al pedido, puede ser averr intenta 
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
										
										cout<<"El reporte de su pedido realizado hace unos instantes es el siguiente...";
									
										cout<<"Ingre si si desea generar el archivo de su pedido de lo contrario ingrese no";
										cout<<"Se guardara en el sistema";
										norders++;
										system("pause");
										break;
									case 2:
										cout<<"Hasta luego"<<endl;
										break;
							
								}
							}
							else{
								cout<<"La cuenta es invalida";
							}
							break;
							
						case 2:
							cout<<"Se registrara una cuenta"<<endl;
							char op_modificar;
							cout<<"\tMorly:Procederemos a crear una cuenta....";
							listofclients[nclients].ingresarDatos();
							nclients++;
								
							break;  			
								
						}	
							
					system("PAUSE");
				}while(account!=0);
	
				break;
		}
		
	}while(op_tipouser!=0);

	system("PAUSE");
	return 0;
}
