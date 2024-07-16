#include "Zombie.hpp"

Zombie::Zombie()
{
}

Zombie::Zombie(std::string name)
{
    this->name = name;
}


void Zombie::setName(std::string name)
{
    this->name = name;
}

std::string Zombie::getName()
{
    return this->name;
}

void Zombie::announce()
{
    std::cout << this->name  << ": " << "BraiiiiiiinnnzzzZ..." << std::endl;
}

Zombie::~Zombie() {
    std::cout << "Zombie " << getName() << " destroyed.\n";
}