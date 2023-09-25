#include "Serialization.hpp"

int main(int argc, char **argv)
{
    if (argc != 2)
	{
        std::cerr << "Usage: " << argv[0] << " <literal>" << std::endl;
        return 1;
    }
    Serialization::convert(argv[1]);

    return 0;
}
