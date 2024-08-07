#include "Animal.hpp"

Animal::Animal() : type("animal")
{
    std::cout << "animal constructor called" << std::endl;
}
Animal::Animal(const std::string &type) : type(type)
{
}

Animal::~Animal()
{
    std::cout << "animal destructor called" << std::endl;
}

Animal::Animal(Animal &copy)
{
    type = copy.type;
    std::cout << "animal copy constructor called" << std::endl;
}

Animal &Animal::operator=(const Animal &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "animal copy assignment called" << std::endl;
    return *this;
}

std::string Animal::getType() const
{
    return type;
}
void Animal::makeSound() const
{
    std::cout << "animal sound" << std::endl;
}