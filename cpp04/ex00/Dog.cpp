#include "Dog.hpp"

Dog::Dog() : Animal("dog")
{
    std::cout << "dog constructor called" << std::endl;
}

Dog::Dog(const std::string &type) : Animal(type)
{
}

Dog::~Dog()
{
    std::cout << "dog destructor called" << std::endl;
}

Dog::Dog(Dog &copy)
{
    type = copy.type;
    std::cout << "dog copy constructor called" << std::endl;
}

Dog &Dog::operator=(const Dog &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "dog copy assignment called" << std::endl;
    return *this;
}

void Dog::makeSound() const
{
    std::cout << "dog sound" << std::endl;
}