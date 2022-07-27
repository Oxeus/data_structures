#ifndef MANAGER_H
#define MANAGER_H

#include "arr/arr.h"

class Manager {
	public:
		Manager();
		~Manager();
		void main_menu();
		void input_error_check(std::string field, int input);
	private:
		ARR * array;
		std::string fill = "******************************";
		std::string space = " ";
};

#endif