#include "Zombie.hpp"

int	main(void)
{
	Zombie zombie1;
	zombie1.setName("zombie1");
	zombie1.announce();
	Zombie *zombie2 = newZombie("zombie2");
	zombie2->announce();
	randomChump("zombie3");

	delete (zombie2);
}