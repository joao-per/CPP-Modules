#ifndef EASYFIND_HPP
# define EASYFIND_HPP

# include <algorithm>

template <typename T>
typename T::iterator easyfind(T &container, int value)
{
	//The line `typename T::iterator it = std::find(container.begin(), 
	//container.end(), value);` is using the `std::find` algorithm to search for 
	//the value `value` in the container `container`.
	typename T::iterator it = std::find(container.begin(), container.end(), value);
	if (it == container.end())
		throw std::exception();
	return (it);
}

#endif