#include <iostream>
#include <cstdlib>
#include <ctime>
#include <typeinfo>
#include "Base.hpp"
#include "A.hpp"
#include "B.hpp"
#include "C.hpp"

Base* generate(void) {
    int randomNum = rand() % 3; // Gives a number between 0 and 2.
    
    if (randomNum == 0)
        return new A;
    else if (randomNum == 1)
        return new B;
    else
        return new C;
}

void identify(Base* p) {
    if (dynamic_cast<A*>(p))
        std::cout << "A" << std::endl;
    else if (dynamic_cast<B*>(p))
        std::cout << "B" << std::endl;
    else if (dynamic_cast<C*>(p))
        std::cout << "C" << std::endl;
}

void identify(Base& p) {
    try {
        (void)dynamic_cast<A&>(p);
        std::cout << "A" << std::endl;
    } catch (const std::bad_cast &) {}
    
    try {
        (void)dynamic_cast<B&>(p);
        std::cout << "B" << std::endl;
    } catch (const std::bad_cast &) {}
    
    try {
        (void)dynamic_cast<C&>(p);
        std::cout << "C" << std::endl;
    } catch (const std::bad_cast &) {}
}

int main() {
    srand(static_cast<unsigned int>(time(NULL))); // Seed the random number generator.
    
    for (int i = 0; i < 5; i++) {
        Base* instance = generate();
        identify(instance);
        identify(*instance);
        delete instance;
        std::cout << "------" << std::endl;
    }
    
    return 0;
}
