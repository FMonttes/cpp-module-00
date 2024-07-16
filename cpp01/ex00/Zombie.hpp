#ifndef ZOMIBE_HPP
#define ZOMIBE_HPP

#include <iostream>
#include <string>


class Zombie
{
    private:
        std::string name;
    public:
        Zombie();
        Zombie(std::string name);
        ~Zombie();
        void announce();
        void setName(std::string name);
        std::string getName();

};
Zombie *newZombie(std::string name);
void randomChump(std::string name);

#endif