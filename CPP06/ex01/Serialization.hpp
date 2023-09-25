#ifndef SERIALIZATION_HPP
# define SERIALIZATION_HPP

# include <stdint.h>
# include <iostream>
# include "Data.hpp"

class Serialization
{
	private:
		Serialization();
		Serialization(const Serialization &Serialization);

	public:
		~Serialization();
		Serialization &operator= (Serialization const &other);

		static uintptr_t serialize(Data* ptr);
		static Data* deserialize(uintptr_t raw);
};

#endif