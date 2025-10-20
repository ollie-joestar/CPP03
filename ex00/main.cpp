#include "ClapTrap.hpp"

int	main() {
	std::cout << "----- Testing ClapTrap -----" << std::endl;
	ClapTrap	claptrap1("ClapTrap-One");
	ClapTrap	claptrap2("ClapTrap-Two");

	claptrap1.attack("ClapTrap-Two");
	claptrap2.takeDamage(5);
	claptrap2.beRepaired(3);
	claptrap2.attack("ClapTrap-One");
	claptrap1.takeDamage(12);
	claptrap1.beRepaired(5);
	claptrap1.attack("ClapTrap-Two");
	std::cout << "\n----- Testing destructors -----" << std::endl;

	return 0;
}
