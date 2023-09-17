#include "AMateria.hpp"

class Ice : public AMateria {
public:
    Ice();
    virtual ~Ice();
    AMateria* clone() const override;
    void use(ICharacter& target) override;
};