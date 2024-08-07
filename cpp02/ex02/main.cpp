#include "Fixed.hpp"

int	main(void)
{
	Fixed	a;

	Fixed j(10);
	Fixed const b(12);
	Fixed const c(11);
	Fixed const d(20);
	Fixed const e(20);
	Fixed const f(Fixed(5) * Fixed(2));
	Fixed const g(Fixed(5) + Fixed(2));
	Fixed const h(Fixed(5) - Fixed(2));
	Fixed const i(Fixed(10) / Fixed(2));
	{
		if (b > c)
			std::cout << "o maior é " << b << std::endl;
		else
			std::cout << "o maior é " << c << std::endl;
	}
	{
		if (b < c)
			std::cout << "o menor é " << b << std::endl;
		else
			std::cout << "o menor é " << c << std::endl;
	}
	{
		if (d == e)
			std::cout << d << " e " << e << " sao iguais" << std::endl;
		else if (d >= e)
			std::cout << "o maior é " << d << std::endl;
		else if (e >= d)
			std::cout << "o maior é " << e << std::endl;
	}
	{
		if (d == e)
			std::cout << d << " e " << e << " sao iguais" << std::endl;
		else if (d <= e)
			std::cout << "o menor é " << d << std::endl;
		else if (e <= d)
			std::cout << "o menor é " << e << std::endl;
	}
	{
		if (b != c)
			std::cout << b << " e " << c << " sao diferentes" << std::endl;
	}
	{
		std::cout << f << std::endl;
		std::cout << g << std::endl;
		std::cout << h << std::endl;
		std::cout << i << std::endl;
	}
	{
		std::cout << a << std::endl;
		std::cout << ++a << std::endl;
		std::cout << a << std::endl;
		std::cout << a++ << std::endl;
		std::cout << a << std::endl;
	}
	{
		std::cout << a << std::endl;
		std::cout << --a << std::endl;
		std::cout << a << std::endl;
		std::cout << a-- << std::endl;
		std::cout << a << std::endl;
	}
	{
		std::cout << Fixed::min(a, j) << std::endl;
		std::cout << Fixed::min(b, c) << std::endl;
	}
	{
		std::cout << Fixed::max(a, j) << std::endl;
		std::cout << Fixed::max(b, c) << std::endl;
	}
}
