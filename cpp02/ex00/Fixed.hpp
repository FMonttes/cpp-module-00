#ifndef FIXED_HPP
# define FIXED_HPP

# include <cmath>
# include <iostream>

class Fixed
{
  private:
	int number;
	static const int fractionalBits = 8;

  public:
	Fixed();
	~Fixed();
	Fixed(Fixed const &copy);
	Fixed &operator=(const Fixed &s);
	int getRawBits() const;
	void setRawBits(int const raw);
};

#endif