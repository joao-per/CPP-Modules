#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

class Base::InvalidTypeException : public std::exception
{
    public:
        const char* what() const throw()
        {
            return ("Invalid type");
        }
};

Base* generate(void)
{
    int randomNum = rand() % 3;
    std::cout << "Random number is: " << randomNum << std::endl;
    
    if (randomNum == 0)
        return new A;
    else if (randomNum == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p)
{
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p)
{
    try
    {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    }
    catch(const std::exception& e)
    {
        try
        {
            (void)dynamic_cast<B&>(p);
            std::cout << "B" << std::endl;
        }
        catch(const std::exception& e)
        {
            try
            {
                (void)dynamic_cast<C&>(p);
                std::cout << "C" << std::endl;
            }
            catch(const std::exception& e)
            {
                std::cerr << e.what() << '\n';
            }
        }
    }
    }

int main()
{
    srand(static_cast<unsigned int>(time(NULL))); // Seed the random number generator.
    
    for (int i = 0; i < 5; i++)
    {
        Base* instance = generate();
        identify(instance);
        identify(*instance);
        delete instance;
        std::cout << "------" << std::endl;
    }
    
    return (0);
}
