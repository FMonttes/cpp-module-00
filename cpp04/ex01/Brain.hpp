#ifndef BRAIN_HPP
#define BRAIN_HPP

#include <iostream>

class Brain
{
    std::string *ideas;

public:
    Brain();
    ~Brain();
    Brain &operator=(const Brain &copy);
    Brain(Brain &copy);
    std::string *getIdeas();
};

#endif