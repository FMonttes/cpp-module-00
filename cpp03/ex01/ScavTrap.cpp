#include "ScavTrap.hpp"

ScavTrap::ScavTrap() : ClapTrap()
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "scavtrap called \n";
}

ScavTrap::ScavTrap(std::string name) : ClapTrap(name)
{
    this->hitPoints = 100;
    this->energyPoints = 50;
    this->attackDamage = 20;
    std::cout << "scavtrap called \n";
}

ScavTrap::~ScavTrap()
{
    std::cout << "scavtrap destructor called \n";
}

void ScavTrap::guardGate()
{
    std::cout << this->name << " have entered in guard mode \n";
}

void ScavTrap::takeDamage(unsigned int amount)
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

void ScavTrap::attack(const std::string &target)
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

void ScavTrap::beRepaired(unsigned int amount)
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