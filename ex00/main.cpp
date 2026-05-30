#include "ClapTrap.hpp"

int main()
{
    std::cout << "\n===== CONSTRUCTION TESTS =====\n";
    ClapTrap defaultTrap;
    ClapTrap bob("Bob");
    ClapTrap bobCopy(bob);
    ClapTrap assigned;
    assigned = bob;

    std::cout << "\n===== ACTION TESTS =====\n";
    bob.attack("a goblin");
    bob.takeDamage(3);
    bob.beRepaired(2);
    bob.takeDamage(10);  // should die
    bob.attack("a ghost");
    bob.beRepaired(5);

    std::cout << "\n===== ENERGY DEPLETION =====\n";
    ClapTrap energetic("Energetic");
    for (int i = 0; i < 12; ++i) {
        energetic.attack("a practice dummy");
    }
    energetic.beRepaired(1);  // no energy left

    std::cout << "\n===== DESTRUCTION =====\n";
    return 0;
}