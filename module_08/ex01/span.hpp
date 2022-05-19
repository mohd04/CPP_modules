#ifndef SPAN_HPP
# define SPAN_HPP
# include <vector>
# include <exception>
# include <algorithm>

class Span
{
public:
	Span(unsigned int n = 0);
	Span(const Span& src);
	~Span();

	const Span&		operator=(const Span& src);
	unsigned int	getSize(void);
	unsigned int	getCapacity(void);
	void			addNumber(int adding);
	void			addNumbers(std::vector<int>::iterator start, std::vector<int>::iterator end);
	int				addVector(std::vector<int>);
	int				shortestSpan(void);
	int				longestSpan(void);
	struct SpanFullException : public std::exception
	{
		const char* what() const throw()
		{
			return ("Exception : maximum capacity has been reached");
		}
	};
	struct SpanComputeImpossible : public std::exception
	{
		const char* what() const throw()
		{
			return ("Exception : not enough numbers");
		}
	};

private:
	std::vector<int>	integer;
	unsigned int		capacity;

};

#endif
