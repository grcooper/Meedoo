#include <string>
#include "meedoo.h"
#include <iostream>

Meedoo::Meedoo(std::string n): m_name(n) {
m_health = 100;
m_age = 0; // 0 to 100
m_hunger = 0;
m_energy = 100;
m_sickness = 0;
m_sex = Male;
}

// Getters for the Meedoo
void Meedoo::getStats() {
	std::cout << "Meedoo Name:" << m_name << std::endl;
	switch(m_sex) { 
	 	case Male : std::cout << "Meedoo Sex:" << "Male" << std::endl; break;
	 	case Female : std::cout << "Meedoo Sex:" << "Female" << std::endl; break;
	}
	std::cout << "Meedoo Age:" << m_age << std::endl;
	std::cout << "Meedoo Health:" << m_health << std::endl;
	std::cout << "Meedoo Energy:" << m_energy << std::endl;
	if (m_sickness == 0) {
		std::cout << "Meedoo Sickness:" << "Not Sick! :)" << std::endl;
	}
	if (m_sickness == 1) {
		std::cout << "Meedoo Sickness:" << "Sick! :(" << std::endl;
	}
}

// Destructor
Meedoo::~Meedoo() {
		// blank for now
	}
}