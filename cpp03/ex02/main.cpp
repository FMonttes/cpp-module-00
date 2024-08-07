#include "ScavTrap.hpp"
#include "ClapTrap.hpp"
#include "FragTrap.hpp"
#include <iostream>

int main()
{
    FragTrap teste("frag");
    teste.attack("amigo");
    teste.takeDamage(20);
    std::cout << teste.getEnergyPoints() << std::endl;
    std::cout << teste.getHitPoints() << std::endl;
    teste.beRepaired(5);
    std::cout << teste.getHitPoints() << std::endl;
    std::cout << teste.getEnergyPoints() << std::endl;
    teste.highFiveGuys();
}
