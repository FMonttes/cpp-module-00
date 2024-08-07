#ifndef CAT_HPP
#define CAT_HPP

#include "Animal.hpp"
#include <iostream>

class Cat : public Animal
{
public:
    Cat();
    Cat(const std::string &type);
    ~Cat();
    Cat &operator=(const Cat &copy);
    Cat(Cat &copy);
    void makeSound() const;
};

#endif