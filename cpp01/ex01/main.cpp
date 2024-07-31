#include "Zombie.hpp"

int	main(void)
{
	Zombie *zombies = zombieHorde(100, "zombie");
	for (int i = 0; i < 100; i++)
	{
		zombies[i].announce();
	}
	delete[] zombies;
}