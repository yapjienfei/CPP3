#include "FragTrap.hpp"

FragTrap::FragTrap() : ClapTrap()
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap default constructor called" << std::endl;
}

FragTrap::FragTrap(const std::string& name) : ClapTrap(name)
{
    _hitPoints = 100;
    _energyPoints = 100;
    _attackDamage = 30;
    std::cout << "FragTrap name constructor called for " << _name << std::endl;
}

FragTrap::FragTrap(const FragTrap& other) : ClapTrap(other)
{
    std::cout << "FragTrap copy constructor called" << std::endl;
}

FragTrap& FragTrap::operator=(const FragTrap& other)
{
    std::cout << "FragTrap copy assignment operator called" << std::endl;
    if (this != &other)
        ClapTrap::operator=(other);
    return *this;
}

FragTrap::~FragTrap()
{
    std::cout << "FragTrap destructor called for " << _name << std::endl;
}

void FragTrap::highFiveGuys()
{
    std::cout << "FragTrap " << _name << " is asking for a high five!" << std::endl;
}