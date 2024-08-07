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
	Fixed(const int num);
	Fixed(const float num);
	Fixed(Fixed const &copy);
	float toFloat() const;
	int toInt() const;
	Fixed &operator=(const Fixed &s);
	int getRawBits() const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif