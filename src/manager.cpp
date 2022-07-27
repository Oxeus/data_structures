#include "manager.h"

Manager::Manager()
{
    this->array = new ARR();
}

Manager::~Manager()
{
    if(this->array)
    {
        delete this->array;
        this->array = nullptr;
    }
}

void Manager::main_menu()
{
    bool control = true;
    while(control)
    {
        int choice{};
        std::cout << this->fill << " Main Menu " << this->fill << std::endl;

        std::cout << std::endl
        << space << "00. Exit Main Menu." << std::endl
        << space << "01. Array." << std::endl
        << space << "02. Linear Linked List." << std::endl
        << space << "03. Doubly Linked List." << std::endl
        << space << "04. Circular Linked List." << std::endl
        << space << "05. Queue." << std::endl
        << space << "06. Stack." << std::endl
        << space << "07. Binary Tree." << std::endl
        << space << "08. Binary Search Tree." << std::endl
        << space << "09. HashTable." << std::endl
        << space << "10. Heap." << std::endl
        << space << "11. Graph." << std::endl << std::endl;

        std::cout << this->fill << "***********" << this->fill << std::endl;

        std::cout << std::endl;
        
        input_error_check("Choice: ", choice);

        std::cout << std::endl;

        switch(choice) {
            case 0:
                control = false;
                break;
            case 1:
                this->array->array_menu();
                break;
            case 2:
                break;
            case 3:
                break;
            case 4:
                break;
            case 5:
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

void Manager::input_error_check(std::string field, int input) {
    while(std::cout << space << field && !(std::cin >> input))
    {
        std::cin.clear();
        std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');
        std::cout << std::endl;
    }
}