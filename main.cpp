#include <iostream>
#include "Usuario.h"
#include "clienteBasico.h"
#include "Proveedor.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	
	Proveedor obj1;
    obj1.ingresarDatos();
    obj1.mostrarDatos();
    obj1.modificarProveedor();
    obj1.mostrarDatos();
    system("PAUSE");
	return 0;
}
