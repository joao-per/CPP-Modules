#include "Serialization.hpp"

int main()
{
	Data src = {1, 2};

	std::cout << "src.id: " << src.id << std::endl;
	std::cout << "src.value: " << src.value << std::endl;

	uintptr_t raw = Serialization::serialize(&src);
	Data *dest = Serialization::deserialize(raw);

	std::cout << std::endl;

	std::cout << "dest->id: " << dest->id << std::endl;
	std::cout << "dest->value: " << dest->value << std::endl;

	std::cout << "\033[33mComparing values. \033[0m1 \033[32mequal, \033[0m0 \033[31mdifferent. \033[36mResult:\033[1m\033[38;5;208m" << (&src == dest) << std::endl;
}