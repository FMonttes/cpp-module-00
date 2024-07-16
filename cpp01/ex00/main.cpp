#include "Zombie.hpp"


int main() {
    Zombie zombie1("Zombie1");
    zombie1.announce();
    Zombie* zombie2 = new Zombie("Zombie2");
    zombie2->announce();
    randomChump("Zombie3");
    delete zombie2;
    return 0;
}
