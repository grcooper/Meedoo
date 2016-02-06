#include <iostream>
#include "InputHandler.h"
#include "meedoo.h"

int main(void){

	Meedoo m("Esther");
	while( InputHandler::Read(m) ) { }
	return 0;
}