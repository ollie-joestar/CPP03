#ifndef FRAGTRAP_HPP
#define FRAGTRAP_HPP

#include "ClapTrap.hpp"

class FragTrap : public ClapTrap {
	private:
		static const unsigned int defaultHitPoints = 100;
		static const unsigned int defaultEnergyPoints = 100;
		static const unsigned int defaultAttackDamage = 30;
	public:
		FragTrap();
		FragTrap(const std::string &name);
		FragTrap(const FragTrap &other);
		FragTrap &operator=(const FragTrap &other);
		~FragTrap();

		void highFivesGuys(void);
};

#endif // FRAGTRAP_HPP
