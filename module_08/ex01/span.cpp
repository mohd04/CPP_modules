#include "span.hpp"

Span::Span(unsigned int n) : capacity(n)
{
}

Span::Span(const Span& src)
{
	*this = src;
}

Span::~Span()
{
}

const Span& Span::operator=(const Span& src)
{
	if (&src != this)
	{
		this->capacity = src.capacity;
		this->integer = src.integer;
	}
	return (*this);
}

unsigned int Span::getSize(void)
{
	return (this->integer.size());
}

void Span::addNumber(int adding)
{
	if (this->integer.size() < this->capacity)
		integer.push_back(adding);
	else
		throw Span::SpanFullException();
}

void	Span::addVector(std::vector<int> vec)
{
	this->addNumber(vec.begin(), vec.end());
}

int	getSpan(const int upper, const int lower)
{
	return (upper - lower);
}

int	Span::shortestSpan(void)
{
	if (this->integer.size() > 1)
	{
		std::vector<int>	sorted(this->integer);
		std::vector<int>	spans(this->integer.size() - 1);

		std::sort(sorted.begin(), sorted.end());
		std::transform(++sorted.begin(), sorted.end(), sorted.begin(), spans.begin(), &getSpan);
		return (*std::min_element(spans.begin(), spans.end()));
	}
	throw Span::SpanComputeImpossible();
}

int Span::longestSpan(void)
{
	if (this->integer.size() > 1)
	{
		return (*std::max_element(this->integer.begin(), this->integer.end()) - *std::min_element(this->integer.begin(), this->integer.end()));
	}
	throw Span::SpanComputeImpossible();
}
