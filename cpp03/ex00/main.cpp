#include "ClapTrap.hpp"

int main()
{
    ClapTrap claptrap1;
    ClapTrap claptrap2("ClapTrap2");

    claptrap1.attack("ClapTrap2");
    claptrap2.takeDamage(5);
    claptrap2.beRepaired(5);

    return 0;
}