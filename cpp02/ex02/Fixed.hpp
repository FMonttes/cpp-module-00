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
	bool operator>(const Fixed &fixedValue) const;
	bool operator>=(const Fixed &fixedValue) const;
	bool operator<(const Fixed &fixedValue) const;
	bool operator<=(const Fixed &fixedValue) const;
	bool operator==(const Fixed &fixedValue) const;
	bool operator!=(const Fixed &fixedValue) const;
	Fixed operator+(const Fixed &fixedValue) const;
	Fixed operator*(const Fixed &fixedValue) const;
	Fixed operator-(const Fixed &fixedValue) const;
	Fixed operator/(const Fixed &fixedValue) const;
	Fixed &operator++();
	Fixed operator++(int);
	Fixed &operator--();
	Fixed operator--(int);
	static Fixed &min(Fixed &a, Fixed &b);
	static const Fixed &min(Fixed const &a, Fixed const &b);
	static Fixed &max(Fixed &a, Fixed &b);
	static const Fixed &max(Fixed const &a, Fixed const &b);

	int getRawBits() const;
	void setRawBits(int const raw);
};

std::ostream &operator<<(std::ostream &o, Fixed const &fixed);

#endif