#include "HumanA.hpp"

HumanA::HumanA(std::string name, Weapon &type) : name(name), type(type)
{
}
HumanA::~HumanA()
{
}

void HumanA::attack()
{
	std::cout << name << " attacks with their " << type.getType() << std::endl;
}