#ifndef ZOMBIE_HPP
#define ZOMBIE_HPP

#include <string>

class Zombie {
public:
    Zombie();
    Zombie(const std::string& name);
    ~Zombie();

    void announce(void) const;

private:
    std::string _name;
};

Zombie* zombieHorde(int N, std::string name);

#endif // ZOMBIE_HPP
