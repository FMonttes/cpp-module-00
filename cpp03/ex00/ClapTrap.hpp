#ifndef CLAPTRAP_HPP
#define CLAPTRAP_HPP

#include <iostream>

class ClapTrap
{
	std::string name;
	int hitPoints;
	int energyPoints;
	int attackDamage;

public:
	ClapTrap(std::string name);
	~ClapTrap();
	ClapTrap(ClapTrap &copy);
	ClapTrap &operator=(const ClapTrap &copy);
	void attack(const std::string &target);
	void takeDamage(unsigned int amount);
	void beRepaired(unsigned int amount);
	std::string getName();
	int getHitPoints();
	int getAttackDamage();
	int getEnergyPoints();
	void setName(const std::string newName);
	void setHitPoints(int newHitPoints);
	void setEnergyPoints(int newEnergyPoints);
	void setAttackDamage(int newAttackDamage);
};

#endif
