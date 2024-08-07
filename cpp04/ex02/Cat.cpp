#include "Cat.hpp"

Cat::Cat() : Animal("cat")
{
    attribute = new Brain();
    std::cout << "cat constructor called" << std::endl;
}

Cat::Cat(const std::string &type) : Animal(type)
{
}

Cat::~Cat()
{
    delete (attribute);
    std::cout << "cat destructor called" << std::endl;
}

Cat::Cat(Cat &copy)
{
    attribute = new Brain(*copy.attribute);
    type = copy.type;
    std::cout << "cat copy constructor called" << std::endl;
}

Cat &Cat::operator=(const Cat &copy)
{
    if (this != &copy)
    {
        delete attribute;
        type = copy.type;
        attribute = new Brain(*copy.attribute);
    }
    std::cout << "cat copy assignment called" << std::endl;
    return *this;
}

void Cat::makeSound() const
{
    std::cout << "cat sound" << std::endl;
}