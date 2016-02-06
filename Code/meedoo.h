#include <string>

enum Sex {Male, Female};

class Meedoo { 
	const string m_name; 
	bool m_sickness; // 0 for not sick, 1 for sick
	int m_age; // combine with health? 
	bool m_hunger; // 0 for not hungry, 1 for hungry
	int m_health; // 0 means dead - 100 means very very healthy
	int m_energy; // 0 to 100, 0 is need sleep, 1 doesnt need sleep
	Sex m_sex;
	// Setter for Meedoo's Name
	public:
		Meedoo(string n) {
	}

	// Getters for the Meedoo
	void getStats() {
	}
	// Destructor
	~Meedoo() {
		// blank for now
	}
}