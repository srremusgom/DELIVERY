#include <iostream>
#include <string.h>
#include <iomanip>
using namespace std;

class Usuario{
    protected:
        char nombres[30];
        char apellidos[30];
        char telefono[10];
        int edad;
        int clave;//123
    public:
        Usuario();
        virtual void ingresarDatos()=0;
        virtual void mostrarDatos()=0;
};

Usuario :: Usuario(){
    strcpy(nombres,"(sin nombre)");
    strcpy(apellidos,"(sin apellidos)");
    strcpy(telefono,"(sin telefono)");
    edad=0;
    clave=0;
}

class clienteBasico:Usuario{
    protected:
        char dni[15];
        char direccion[30];
    public:
        void ingresarDatos();
        void mostrarDatos();
        void realizarPedido();
        void modificar();
        void verPedido();
};

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
					cout<<" opcion inv�lida ";
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

class Proveedor:Usuario{
    protected:
        int codProveedor;
        char nombreEmpresa[30];
        char direccion[30];
        char ruc[15];
    public:
        void ingresarDatos();
        void mostrarDatos();
        void agregarProveedor();
        void modificarProveedor();
        void verProveedor();
};

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
					cout<<" opcion inv�lida ";
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


class Producto{
    protected:
        int codProducto;
        int precioUnitario;
        char nomProducto[20];
        int cantExiste;
        char categoria[20];
    public:
        void agregaProducto();
        void modificarProducto();
        void actualizarCantidad();
        void verProducto();
};

void Producto :: agregaProducto(){
	cout<<"Ingrese el Nombre del Producto : "; fflush(stdin); cin.getline(nomProducto,20,'\n');
	cout<<"Ingrese la cantidad existente : "; cin>>cantExiste;
	cout<<"Ingrese la categoria : "; fflush(stdin); cin.getline(categoria,20,'\n');
	cout<<"Ingrese el precio unitario : "; cin>>precioUnitario;
	cout<<endl;
}

void Producto :: modificarProducto(){
	int op;
	cout<<"\n1. Nombre de Producto"<<endl;
	cout<<"2. Cantidad existente"<<endl;
	cout<<"3. Categoria"<<endl;
	cout<<"4. Precio Unitario"<<endl;
	cout<<"Seleccione una opcion[1-4]"; cin>>op;
		switch (op){
				case 1:
					cin.ignore();	
					cout<<"Ingrese el nuevo nombre del producto : "; cin.getline(nomProducto,20,'\n');
					break;
				case 2:
					cout<<"Ingrese la nueva cantidad existente : "; cin>>cantExiste;
					break;
				case 3:
					cin.ignore();
					cout<<"Ingrese la nueva categoria : "; cin.getline(categoria,20,'\n');
					break;
				case 4:
					cout<<"Ingrese el nuevo precio unitario : "; cin>>precioUnitario;
					break;
				default:
					cout<<"opcion invalida ";
					break;		
		}
}

class Servicios{
    protected:
        char nomServicio[30];
        int dispExiste;
        int pagoServicio;
    public:
        void agregarServicio();
        void modificarServicio();
        void verServicio();
        void actualizarDisponibilidad();
};



class Factura{
    protected:
        int codFactura;
        char fecha[30];
        int pagoTotal;
    public:
        void generarFactura();
        void verFactura();
        void asignarCliente();
        void asignarProducto();
};

int main(){

    clienteBasico obj;
    obj.ingresarDatos();
    obj.mostrarDatos();
    obj.modificar();
    obj.mostrarDatos();

    Proveedor obj1;
    obj1.ingresarDatos();
    obj1.mostrarDatos();
    obj1.modificarProveedor();
    obj1.mostrarDatos();

    return 0;
}