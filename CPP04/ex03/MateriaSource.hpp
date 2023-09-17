#include "IMateriaSource.hpp"
#include "AMateria.hpp"
#include <string>

class MateriaSource : public IMateriaSource {
private:
    AMateria* materias[4];

public:
    MateriaSource();
    virtual ~MateriaSource();

    void learnMateria(AMateria* m) override;
    AMateria* createMateria(std::string const & type) override;
};
