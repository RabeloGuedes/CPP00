#include <ctype.h>
#include <iostream>
#include <stdint.h>

void	putstr(char *s)
{
	std::string str(s);
	for (uint32_t i = 0; i < str.length(); i++)
		str[i] = std::toupper(str[i]);
	std::cout << str;
}

int	main(int ac, char **av)
{
	(void)av;
	if (ac == 1)
	{
		std::cout << "* LOUD AND UNBEARABLE FEEDBACK NOISE *\n"; 
		return (0);
	}
	for (uint32_t i = 1; i < (uint32_t)ac; i++)
	{
		putstr(av[i]);
		if (i < (uint32_t)ac - 1)
			std::cout << " ";
	}
	std::cout << "\n";
	return (0);
}
