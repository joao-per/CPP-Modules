#include <iostream>
#include "Array.hpp"

int main()
{
    try
	{
        Array<int> intArray(5);

        std::cout << "Size of intArray: " << intArray.size() << std::endl;

        for (unsigned int i = 0; i < intArray.size(); i++)
            std::cout << "intArray[" << i << "] = " << intArray[i] << std::endl;

        Array<std::string> strArray(3);
        strArray[0] = "apple";
        strArray[1] = "banana";
        strArray[2] = "cherry";

        std::cout << "\nSize of strArray: " << strArray.size() << std::endl;
        
        for (unsigned int i = 0; i < strArray.size(); i++)
            std::cout << "strArray[" << i << "] = " << strArray[i] << std::endl;

        // Triggering exception
        std::cout << "\nTriggering out-of-bound exception..." << std::endl;
        std::cout << strArray[5] << std::endl;
    }
	catch (std::exception &e)
	{
        std::cerr << "Exception caught: " << e.what() << std::endl;
    }

    return 0;
}
