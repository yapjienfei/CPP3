#include "ClapTrap.hpp"
#include "ScavTrap.hpp"

int main()
{
    std::cout << "\n===== CLAPTRAP (base) TESTS =====\n";
    ClapTrap clap("Clappy");
    clap.attack("a training dummy");
    clap.takeDamage(5);
    clap.beRepaired(3);

    std::cout << "\n===== SCAVTRAP CONSTRUCTION CHAIN =====\n";
    ScavTrap scav("Scavvy");

    std::cout << "\n===== SCAVTRAP ACTIONS =====\n";
    scav.attack("an intruder");
    scav.guardGate();
    scav.takeDamage(120);   // more than HP (100)
    scav.beRepaired(20);
    scav.attack("another intruder");  // should fail because dead

    std::cout << "\n===== SCAVTRAP COPY & ASSIGNMENT =====\n";
    ScavTrap scavCopy(scav);
    ScavTrap scavAssigned;
    scavAssigned = scav;
    scavCopy.guardGate();
    scavAssigned.guardGate();

    std::cout << "\n===== DESTRUCTION (reverse order) =====\n";
    return 0;
}