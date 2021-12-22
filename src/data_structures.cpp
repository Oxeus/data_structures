#include "manager.h"

int main(int argc, char *argv[])
{
    Manager * manager = new Manager();
    manager->main_menu();
    delete manager;
    return 0;
}
