#include "ClapTrap.hpp"

ClapTrap::ClapTrap() : name("ClapTrap"), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap default constructor called" << std::endl;
}

ClapTrap::ClapTrap(std::string name): name(name), hitPoints(10), energyPoints(10), attackDamage(0)
{
    std::cout << "ClapTrap name constructor called" << std::endl;
}


ClapTrap::ClapTrap(const ClapTrap &copy)
{
    std::cout << "ClapTrap copy constructor called" << std::endl;
    *this = copy;
}

ClapTrap &ClapTrap::operator=(const ClapTrap &copy)
{
    std::cout << "ClapTrap assignation operator called" << std::endl;
    if (this != &copy)
    {
        this->name = copy.name;
        this->hitPoints = copy.hitPoints;
        this->energyPoints = copy.energyPoints;
        this->attackDamage = copy.attackDamage;
    }
    return *this;
}

ClapTrap::~ClapTrap()
{
    std::cout << "ClapTrap destructor called" << std::endl;
}

void ClapTrap::attack(std::string const &target)
{
    if (this->hitPoints > 0  && this->energyPoints > 0)
    {
        std::cout << this->name << " attacks " << target << std::endl;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << this->name << " can't attack because it has no energy points or hit points!" << std::endl;
    }

}

void ClapTrap::beRepaired(unsigned int amount)
{
    if (amount <= 10)
    {
        std::cout << this->name << " has been repaired for " << amount << " hit points!" << std::endl;
        this->hitPoints += amount;
        this->energyPoints -= 1;
    }
    else
    {
        std::cout << this->name << " can't be repaired for more than 10 hit points!" << std::endl;
    }
    if (this->energyPoints == 0 || this->hitPoints == 0)
    {
        std::cout << this->name << " can't be repaired because it has no energy points or hit points!" << std::endl;
    }
}

void ClapTrap::takeDamage(unsigned int amount)
{
    if (this->hitPoints > amount)
    {
        std::cout << this->name << " has taken " << amount << " points of damage!" << std::endl;
        this->hitPoints -= amount;
    }
    if (amount > 10)
    {
        std::cout << this->name << " can't take more than 10 points of damage!" << std::endl;
    }
    if (this->hitPoints == 0)
    {
        std::cout << this->name << " has no hit points left!" << std::endl;
    }
}

