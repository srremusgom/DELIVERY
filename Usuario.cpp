#include "Usuario.h"
#include <string.h>

Usuario :: Usuario(){
	strcpy(nombres,"(sin nombre)");
	strcpy(apellidos,"(sin apellidos)");
	strcpy(telefono,"(sin telefono)");
	edad=0;
}

