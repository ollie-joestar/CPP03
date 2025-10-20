#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"

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

	std::cout << "\n----- Testing ScavTrap -----" << std::endl;
	ScavTrap	scavtrap1("ScavTrap-One");
	ScavTrap	scavtrap2("ScavTrap-Two");
	scavtrap1.attack("ScavTrap-Two");
	scavtrap2.beRepaired(10);
	scavtrap2.takeDamage(15);
	scavtrap2.beRepaired(10);
	scavtrap2.attack("ScavTrap-One");
	scavtrap1.takeDamage(25);
	scavtrap1.beRepaired(30);
	scavtrap1.attack("ScavTrap-Two");
	scavtrap1.guardGate();
	scavtrap1.guardGate();
	scavtrap1.takeDamage(200);
	scavtrap1.guardGate();

	std::cout << "\n----- Testing FragTrap -----" << std::endl;
	FragTrap	fragtrap1("FragTrap-One");
	FragTrap	fragtrap2("FragTrap-Two");
	fragtrap1.attack("FragTrap-Two");
	fragtrap2.takeDamage(20);
	fragtrap2.beRepaired(15);
	fragtrap2.attack("FragTrap-One");
	fragtrap1.takeDamage(50);
	fragtrap1.beRepaired(60);
	fragtrap1.attack("FragTrap-Two");
	fragtrap1.highFivesGuys();
	fragtrap1.takeDamage(200);
	fragtrap1.highFivesGuys();
	std::cout << "\n----- Testing destructors -----" << std::endl;

	return 0;
}
