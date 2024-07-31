#ifndef HUMANB_HPP
# define HUMANB_HPP

# include "Weapon.hpp"

class HumanB
{
  public:
	HumanB(std::string name);
	// ~HumanB();
	void setType(Weapon &type);
	void attack();

  private:
	std::string name;
	Weapon *type;
};

#endif