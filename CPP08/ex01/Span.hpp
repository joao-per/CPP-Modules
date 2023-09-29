#ifndef SPAN_HPP
# define SPAN_HPP

# include <vector>

class Span
{
	private:
		unsigned int		_n;
		std::vector<int>	_v;
		Span();
	public:
		Span(unsigned int n);
		Span(const Span &copy);
		~Span();
		Span &operator=(const Span &copy);

		void	addNumber(int n);
		void	addNumber(std::vector<int>::iterator begin, std::vector<int>::iterator end);
		int		shortestSpan();
		int		longestSpan();
};

#endif