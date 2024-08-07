#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    std::cout << "cat constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
}

Cat::~Cat()
{
    std::cout << "cat destructor called" << std::endl;
}

Cat::Cat(Cat &copy)
{
    type = copy.type;
    std::cout << "cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        type = copy.type;
    }
    std::cout << "cat copy assignment called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "cat sound" << std::endl;
}