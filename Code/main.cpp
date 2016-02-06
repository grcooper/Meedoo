#include <iostream>
#include "InputHandler.h"

int main(void){

	while(InputHandler::getInstance->Read()) { }

	return 0;
}