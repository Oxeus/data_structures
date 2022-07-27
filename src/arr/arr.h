#ifndef ARR_H
#define ARR_H
#include <stdlib.h>
#include <iostream>
#include <limits>

class ARR {
	public:
		ARR();
		ARR(int custom_size);
		ARR(const ARR &to_copy);
		~ARR();

		void array_menu();
		void print_array();
		void regenerate_array();

		int set_index(int index, int data);
		int get_index(int index);
		void print_index(int index);

		bool find();

		void out_of_bounds();
		void input_error_check(std::string input_field, int input);

	private:
		std::string fill = "******************************";
		std::string space = " ";
		int MAX_DEFAULT_SIZE = 50;
		int MAX_DEFAULT_INT = 50;
		int CURRENT_SIZE;
		int DEFAULT_PRINT_SIZE = 19;
		int * array;
};

#endif