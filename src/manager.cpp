#include "manager.h"

Manager::Manager()
{

}

Manager::~Manager()
{

}

void Manager::main_menu()
{
    std::cout << this->fill << " Main Menu " << this->fill << std::endl;

    std::cout << std::endl
    << " 01. Array." << std::endl
    << " 02. Linear Linked List." << std::endl
    << " 03. Doubly Linked List." << std::endl
    << " 04. Circular Linked List." << std::endl
    << " 05. Queue." << std::endl
    << " 06. Stack." << std::endl
    << " 07. Binary Tree." << std::endl
    << " 08. Binary Search Tree." << std::endl
    << " 09. HashTable." << std::endl
    << " 10. Heap." << std::endl
    << " 11. Graph." << std::endl << std::endl;

    std::cout << this->fill << "***********" << this->fill << std::endl;
}
