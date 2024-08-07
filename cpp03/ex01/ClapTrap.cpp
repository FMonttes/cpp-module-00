#include "ClapTrap.hpp"
ClapTrap::ClapTrap()
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "constructor called \n";
}

ClapTrap::ClapTrap(std::string name) : name(name)
{
    this->hitPoints = 10;
    this->energyPoints = 10;
    this->attackDamage = 0;
    std::cout << "constructor called \n";
}

ClapTrap::~ClapTrap()
{
    std::cout << "destructor called \n";
}

ClapTrap::ClapTrap(ClapTrap &copy)
{
    name = copy.name;
    hitPoints = copy.hitPoints;
    energyPoints = copy.energyPoints;
    attackDamage = copy.attackDamage;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    if (this != &copy)
    {
        name = copy.name;
        hitPoints = copy.hitPoints;
        energyPoints = copy.energyPoints;
        attackDamage = copy.attackDamage;
    }
    return (*this);
}
int ClapTrap::getHitPoints()
{
    return hitPoints;
}
int ClapTrap::getEnergyPoints()
{
    return energyPoints;
}

void ClapTrap::takeDamage(unsigned int amount)
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

void ClapTrap::attack(const std::string &target)
{
    if (this->energyPoints > 0)
    {
        std::cout << this->name << " attacks " << target << std::endl;
        this->energyPoints--;
    }
    else
    {
        std::cout << this->name << " cannot attacks" << std::endl;
    }
}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (this->energyPoints > 0)
    {
        if (amount + this->hitPoints <= 10)
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
