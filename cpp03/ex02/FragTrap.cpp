#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "scavtrap called \n";
}

FragTrap::FragTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 100;
    this->attackDamage = 30;
    std::cout << "scavtrap called \n";
}

FragTrap::~FragTrap()
{
    std::cout << "scavtrap destructor called \n";
}

void FragTrap::highFiveGuys()
{
    std::cout << " HIGH FIVE GUYS \n";
}

void FragTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > 0)
    {
        std::cout << this->name << " take " << amount << " of damage" << std::endl;
        this->hitPoints -= amount;
    }
    else
    {
        std::cout << this->name << " is dead" << std::endl;
    }
}

void FragTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0)
    {
        std::cout << this->name << " attacks " << target << std::endl;
    }
    else
    {
        std::cout << this->name << " cannot attacks" << std::endl;
    }
}

void FragTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0)
    {
        if (amount + this->hitPoints <= 100)
        {
            std::cout << this->name << " repaired " << amount << " life" << std::endl;
            this->energyPoints--;
            this->hitPoints += amount;
        }
    }
    else
    {
        std::cout << "energy not enought" << std::endl;
    }
}