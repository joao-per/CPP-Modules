#include "AMateria.hpp"

class Cure : public AMateria {
public:
	Cure();
	virtual ~Cure();
	AMateria* clone() const override;
	void use(ICharacter& target) override;
};