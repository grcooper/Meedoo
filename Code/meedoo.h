#include <string>

enum sex {Male, Female};

class Meedoo { 
	const string m_name; 
	bool m_sickness; // 0 for not sick, 1 for sick
	int m_age; // combine with health? 
	bool m_hunger; // 0 for not hungry, 1 for hungry
	int m_health; // 0 means dead - 100 means very very healthy
	int m_energy; // 0 to 100, 0 is need sleep, 1 doesnt need sleep
	sex m_sex;
	// Setter for Meedoo's Name
	public:
		Tammy(string n): m_name(n) {
		m_health = 100;
		m_age = 0; // 0 to 100
		m_hunger = 0;
		m_energy = 100;
		m_sickness = 0;
		m_sex = Male;
	}

	// Getters for the Meedoo
	void getStats() const {
		 cout << "Meedoo Name:" << m_name << endl;
		 switch(m_sex) { 
		 	case Male : cout << "Meedoo Sex:" << "Male" << endl; break;
		 	case Female : cout << "Meedoo Sex:" << "Female" << endl; break;
		 }
		 cout << "Meedoo Age:" << m_age << endl;
		 cout << "Meedoo Health:" << m_health << endl;
		 cout << "Meedoo Energy:" << m_energy << endl;
		 switch(m_sickness) {
		 	case 0 : cout << "Meedoo Sickness:" << "Not Sick! :)" << endl; break;
			case 1 : cout << "Meedoo Sickness:" << "Sick! :(" << endl; break;
		 }
	}
	// Destructor
	~Tammy() {
		// blank for now
	}
}