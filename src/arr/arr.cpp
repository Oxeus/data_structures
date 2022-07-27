#include "arr.h"

ARR::ARR() {
    srand(time(nullptr));
    this->CURRENT_SIZE = rand() % MAX_DEFAULT_SIZE + 1;
    this->array = new int[this->CURRENT_SIZE];
    for(int i = 0; i < this->CURRENT_SIZE; ++i)
    {
        this->array[i] = rand() % MAX_DEFAULT_INT + 1;
    }
}

ARR::ARR(int custom_size)
{
    srand(time(nullptr));
    this->CURRENT_SIZE = custom_size;
    this->array = new int[this->CURRENT_SIZE];
    for(int i = 0; i < this->CURRENT_SIZE; ++i)
    {
        this->array[i] = rand() % MAX_DEFAULT_INT + 1;
    }
}

ARR::ARR(const ARR &to_copy)
{
    if(this->array)
    {
        delete [] this->array;
    }
    this->CURRENT_SIZE = to_copy.CURRENT_SIZE;
    this->array = new int[this->CURRENT_SIZE];
    for(int i = 0; i < this->CURRENT_SIZE; ++i)
    {
        this->array[i] = 0;
    }
    for(int i = 0; i < this->CURRENT_SIZE; ++i)
    {
        this->array[i] = to_copy.array[i];
    }
}

ARR::~ARR() {
    if(this->array)
    {
        delete [] this->array;
    }
}

void ARR::array_menu()
{
    int index = 0;
    int data = 0;
    bool control = true;
    while(control)
    {
        int choice{};
        std::cout << this->fill << " ARR Menu  " << this->fill << std::endl;

        std::cout << std::endl
        << space << "00. Exit Array Menu." << std::endl
        << space << "01. Regenerate Array." << std::endl
        << space << "02. Print Array." << std::endl
        << space << "03. Set Index." << std::endl
        << space << "04. Get Index." << std::endl
        << space << "05. Print Index." << std::endl << std::endl;

        std::cout << this->fill << "***********" << this->fill << std::endl;
        
        std::cout << std::endl;

        this->input_error_check("Choice: ", choice);

        std::cout << std::endl;

        switch(choice) {
            case 0:
                control = false;
                break;
            case 1:
                this->regenerate_array();
                break;
            case 2:
                this->print_array();
                break;
            case 3:
                this->input_error_check("Index: ", index);
                std::cout << std::endl;
                this->input_error_check("Date: ", data);
                if(this->set_index(index, data) == -1)
                {
                    this->out_of_bounds();
                }
                std::cout << std::endl;
                break;
            case 4:
                this->input_error_check("Index: ", index);
                data = this->get_index(index);
                if(data != -1)
                {
                    std::cout << std::endl << space << "Index: " << index << " - Data: " << data << std::endl << std::endl;
                }
                else
                {
                    this->out_of_bounds();
                }
                break;
            case 5:
                this->input_error_check("Index: ", index);
                this->print_index(index);
                break;
            case 6:
                break;
            case 7:
                break;
            case 8:
                break;
            case 9:
                break;
            case 10:
                break;
            case 11:
                break;
            default:
                break;
        } 
    }
}

void ARR::print_array()
{
    std::cout << space << "[";
    for(int i = 1; i <= this->CURRENT_SIZE; ++i)
    {
        std::cout << this->array[i-1];
        if(i != this->CURRENT_SIZE)
        {
            std::cout << ", ";
        }
        if(i == this->CURRENT_SIZE)
        {
            std::cout << "]" << std::endl;
        }
        else if(i % DEFAULT_PRINT_SIZE == 0)
        {
            
            std::cout << std::endl << " ";
        }
    }
    std::cout << std::endl << space << "Size: " << this->CURRENT_SIZE << std::endl << std::endl;
}

void ARR::regenerate_array()
{
    if(this->array)
    {
        delete [] this->array;
    }
    this->CURRENT_SIZE = rand() % MAX_DEFAULT_SIZE + 1;
    this->array = new int[this->CURRENT_SIZE];
    for(int i = 0; i < this->CURRENT_SIZE; ++i)
    {
        this->array[i] = rand() % MAX_DEFAULT_INT + 1;
    }
}

int ARR::set_index(int index, int data)
{
    if(index < this->CURRENT_SIZE && index >= 0)
    {
        this->array[index] = data;
        return this->array[index];
    }
    else{
        return -1;
    }
}

int ARR::get_index(int index)
{
    if(index < this->CURRENT_SIZE && index >= 0)
    {
        return this->array[index];
    }
    else
    {
        return -1;
    }
}

void ARR::print_index(int index)
{
    if(index < this->CURRENT_SIZE && index >= 0)
    {
        std::cout << std::endl << space << "Index: " << index << " - Data: " << this->array[index] << std::endl << std::endl;
    }
    else
    {
        this->out_of_bounds();
    }
}

void ARR::out_of_bounds() {
    std::cout << std::endl << space << "Index Out Of Bounds." << std::endl << std::endl;
}

void ARR::input_error_check(std::string field, int input) {
    while(std::cout << space << field && !(std::cin >> input))
        {
            std::cin.clear();
            std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
            std::cout << std::endl;
        }
}