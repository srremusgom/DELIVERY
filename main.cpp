#include <iostream>
#include "Usuario.h"
#include "clienteBasico.h"
#include "Proveedor.h"
#include "Servicios.h"
using namespace std;

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main() {
	system("CLS");
	Servicios ob;
	ob.agregarServicio();
	ob.verServicio();
	system("PAUSE");
	return 0;
}
