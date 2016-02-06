#ifndef INPUTHANDLER_H
#define INPUTHANDLER_H

#include "meedoo.h"

class InputHandler {
private:	
	InputHandler();
	~InputHandler();
public:
	static bool Read(Meedoo& m);
};

#endif