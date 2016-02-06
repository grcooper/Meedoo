#include <string>
#include <iosream>
#include "meedoo.h"


InputHandler::InputHandler() {}
InputHandler::~InputHandler() {}

static void InputHandler::getInstance() {
	if( m_instance == NULL ) {
		m_instance = new InputHandler();
	}
	return m_instance;
}

static void InputHandler::destroyInstance() {
	if(m_instance != NULL ){
		delete m_instance;
	}
}

bool InputHandler::Read(Meedoo m) {
	string input;
	if( cin >> input ) {
		switch(input) {
		case "feed": case "Feed":
			cout << "FEED HERE" << endl;
			break;

		case "clean": case "Clean":
			cout << "CLEAN HERE" << endl;
			break;

		case "medicine": case "Medicine":
			cout << "GIVE MEDICINE" << endl;
			break;

		case "stats": case "Stats": 
			cout << "CHECK STATS" << endl;
			m.getStats();
			break;

		case "exit": case "Exit":
			cout << "Exiting" << endl;
			return false;
			break;

		case "help": case "Help":
			cout << "Commands: " << endl;
			cout << " - feed" << endl;
			cout << " - clean" << endl;
			cout << " - medicine" << endl;
			cout << " - stats" << endl << endl;
			cout << " - exit" << endl;
			break;

		default:
			cout << "Type help to see list of commands" << endl;
			break;
		}
	}
	else {
		cerr << "Input Failed" << endl << endl;
	}
	return true;
}