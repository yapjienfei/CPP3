#include "ClapTrap.hpp"
#include "ScavTrap.hpp"
#include "FragTrap.hpp"
#include "DiamondTrap.hpp"

int main()
{
    std::cout << "\n===== DIAMONDTRAP CONSTRUCTION CHAIN =====\n";
    DiamondTrap diamond("Gem");

    std::cout << "\n===== DIAMONDTRAP STATS VERIFICATION =====\n";
    std::cout << "Expected HP (from FragTrap): 100" << std::endl;
    std::cout << "Expected EP (from ScavTrap): 50" << std::endl;
    std::cout << "Expected AD (from FragTrap): 30" << std::endl;

    std::cout << "\n===== DIAMONDTRAP ACTIONS =====\n";
    diamond.attack("a dragon");        // uses ScavTrap's attack
    diamond.guardGate();               // from ScavTrap
    diamond.highFiveGuys();           // from FragTrap
    diamond.whoAmI();                  // own function

    std::cout << "\n===== TAKING DAMAGE & REPAIR =====\n";
    diamond.takeDamage(120);
    diamond.beRepaired(50);
    diamond.attack("a skeleton");      // should fail (dead)

    std::cout << "\n===== COPY & ASSIGNMENT =====\n";
    DiamondTrap diamondCopy(diamond);
    DiamondTrap diamondAssigned;
    diamondAssigned = diamond;
    diamondCopy.whoAmI();
    diamondAssigned.whoAmI();

    std::cout << "\n===== DESTRUCTION (reverse order) =====\n";
    return 0;
}