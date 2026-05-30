#include "ClapTrap.hpp"
#include "FragTrap.hpp"

int main() {
    std::cout << "\n===== FRAGTRAP CONSTRUCTION =====\n";
    FragTrap frag("Fraggy");

    std::cout << "\n===== FRAGTRAP ACTIONS =====\n";
    frag.attack("a giant spider");
    frag.highFiveGuys();
    frag.takeDamage(50);
    frag.beRepaired(30);
    frag.takeDamage(80);  // should kill (100 HP)
    frag.highFiveGuys(); // dead, but message still appears (no check in highFivesGuys)
    frag.beRepaired(10);

    std::cout << "\n===== COPY/ASSIGNMENT =====\n";
    FragTrap fragCopy(frag);
    FragTrap fragAssigned;
    fragAssigned = frag;
    fragCopy.highFiveGuys();

    std::cout << "\n===== DESTRUCTION =====\n";
    return 0;
}