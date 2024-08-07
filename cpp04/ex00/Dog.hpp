#ifndef DOG_HPP
#define DOG_HPP

#include "Animal.hpp"
#include <iostream>

class Dog : public Animal
{
public:
    Dog();
    Dog(const std::string &type);
    ~Dog();
    Dog &operator=(const Dog &copy);
    Dog(Dog &copy);
    void makeSound() const;
};

#endif