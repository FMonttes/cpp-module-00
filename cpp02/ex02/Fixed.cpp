#include "Fixed.hpp"

Fixed::Fixed(): _value(0)
{
	std::cout << "Fixed Default Constructor called" << std::endl;
}

Fixed::Fixed(const int input)
{
	std::cout << "Fixed Int Constructor called" << std::endl;
	this->_value = input << this->_fractionalBits;
}

Fixed::Fixed(const float input)
{
	std::cout << "Fixed Float Constructor called" << std::endl;
	this->_value = roundf(input * (1 << this->_fractionalBits));
}

Fixed::Fixed(const Fixed &copy)
{
	std::cout << "Fixed Copy Constructor called" << std::endl;
	*this = copy;
}

Fixed::~Fixed()
{
	std::cout << "Fixed Deconstructor called" << std::endl;
}

Fixed &Fixed::operator=(const Fixed &src)
{
	std::cout << "Fixed Assignation operator called" << std::endl;
	if (this != &src)
		this->_value = src.getRawBits();

	return *this;
}

float	Fixed::toFloat(void)const
{
	return ((float)this->_value / (float)(1 << this->_fractionalBits));
}

int	Fixed::toInt(void)const
{
	return (this->_value >> this->_fractionalBits);
}
int	Fixed::getRawBits(void)const
{
	return (this->_value);
}

void	Fixed::setRawBits(int const raw)
{
	this->_value = raw;
}

bool	Fixed::operator>(const Fixed &fixed)const
{
    return (this->_value > fixed.getRawBits());
}

bool	Fixed::operator<(const Fixed &fixed)const
{
    return (this->_value < fixed.getRawBits());
}

bool	Fixed::operator>=(const Fixed &fixed)const
{
    return (this->_value >= fixed.getRawBits());
}

bool	Fixed::operator<=(const Fixed &fixed)const
{
    return (this->_value <= fixed.getRawBits());
}

bool	Fixed::operator==(const Fixed &fixed)const
{
    return (this->_value == fixed.getRawBits());
}

bool	Fixed::operator!=(const Fixed &fixed)const
{
    return (this->_value != fixed.getRawBits());
}

Fixed	Fixed::operator+(const Fixed &fixed)const
{
    return (Fixed(this->toFloat() + fixed.toFloat()));
}

Fixed	Fixed::operator-(const Fixed &fixed)const
{
    return (Fixed(this->toFloat() - fixed.toFloat()));
}

Fixed	Fixed::operator*(const Fixed &fixed)const
{
    return (Fixed(this->toFloat() * fixed.toFloat()));
}

Fixed	Fixed::operator/(const Fixed &fixed)const
{
    return (Fixed(this->toFloat() / fixed.toFloat()));
}

Fixed	&Fixed::operator++()
{
    this->_value++;
    return (*this);
}

Fixed	Fixed::operator++(int)
{
    Fixed tmp(*this);
    operator++();
    return (tmp);
}

Fixed	&Fixed::operator--()
{
    this->_value--;
    return (*this);
}

Fixed	Fixed::operator--(int)
{
    Fixed tmp(*this);
    operator--();
    return (tmp);
}

Fixed	&Fixed::min(Fixed &a, Fixed &b)
{
    return (a < b ? a : b);
}

const Fixed	&Fixed::min(const Fixed &a, const Fixed &b)
{
    return (a < b ? a : b);
}

Fixed	&Fixed::max(Fixed &a, Fixed &b)
{
    return (a > b ? a : b);
}

const Fixed	&Fixed::max(const Fixed &a, const Fixed &b)
{
    return (a > b ? a : b);
}

std::ostream	&operator<<(std::ostream &o, Fixed const &fixed)
{
	o << fixed.toFloat();
	return (o);
}