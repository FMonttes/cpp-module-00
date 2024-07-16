#ifndef FIXED_HPP
#define FIXED_HPP

#include <iostream>
#include <cmath>

class Fixed
{
private:
    int _value;
    static const int _fractionalBits = 8;

public:
    Fixed();
    Fixed(Fixed const &copy);
    ~Fixed();
    Fixed &operator=(Fixed const &src);
    int getRawBits(void) const;
    void setRawBits(int const raw);


};

#endif