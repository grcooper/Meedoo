#include <iostream>
#include "InputHandler.h"

int main(void){

	Meedoo m("Esther");
	while(InputHandler::getInstance->Read(m)) { }

	return 0;
}