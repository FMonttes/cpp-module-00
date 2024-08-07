#include "ClapTrap.hpp"

int main()
{
    ClapTrap clapTrap("teste");
    clapTrap.attack("amigo");
    clapTrap.takeDamage(5);
    std::cout << clapTrap.getEnergyPoints() << std::endl;
    std::cout << clapTrap.getHitPoints() << std::endl;
    clapTrap.beRepaired(5);
    std::cout << clapTrap.getHitPoints() << std::endl;
    std::cout << clapTrap.getEnergyPoints() << std::endl;
}
