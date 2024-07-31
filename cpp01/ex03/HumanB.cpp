#include "HumanB.hpp"

HumanB::HumanB(std::string name) : name(name)
{
}

/* HumanB::~HumanB()
{
} */
void HumanB::attack()
{
	std::cout << name << " attacks with their " << type->getType() << std::endl;
}

void HumanB::setType(Weapon &type)
{
	this->type = &type;
}