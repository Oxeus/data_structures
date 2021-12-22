#ifndef MANAGER_H
#define MANAGER_H

#include <iostream>
#include <iomanip>
#include <string>

class Manager {
	public:
		Manager();
		~Manager();
		void main_menu();
	private:
		std::string fill = "******************************";
};

#endif