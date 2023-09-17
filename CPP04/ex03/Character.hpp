#include "ICharacter.hpp"
#include "AMateria.hpp"
#include <string>

class Character : public ICharacter {
private:
    std::string name;
    AMateria* inventory[4];

public:
    Character(std::string const & name);
    Character(Character const & other);
    Character& operator=(Character const & other);
    virtual ~Character();

    std::string const & getName() const override;
    void equip(AMateria* m) override;
    void unequip(int idx) override;
    void use(int idx, ICharacter& target) override;
};
