#include <ctype.h>
#include <iostream>
#include <stdint.h>

int	main(int ac, char **av)
{
	if (ac == 1)
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *";
	else
		for (uint32_t i = 1; av[i]; i++)
			for (uint32_t j = 0; av[i][j] ; j++)
				std::cout << (char)std::toupper(av[i][j]);
	std::cout << std::endl;
}
