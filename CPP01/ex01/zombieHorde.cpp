#include "Zombie.hpp"

Zombie* zombieHorde(int N, std::string name) {
    Zombie* horde = new Zombie[N];

    for (int i = 0; i < N; ++i) {
        horde[i] = Zombie(name + std::to_string(i + 1)); // Added a unique number to each Zombie's name
    }

    return horde;
}
