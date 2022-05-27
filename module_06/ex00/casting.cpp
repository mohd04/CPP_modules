#include "casting.hpp"

Casting::Casting(): av(NULL), arg(NULL), character(0), integer(0), flot(0), duble(0)
{
	std::cout << "Default constructor called" << std::endl;
}

Casting::Casting(char *av)
{
	std::cout << "Constructor called" << std::endl;
	this->av = av;
	std::string cp(av);
	this->arg = cp;
	staticCast();
}

Casting::Casting(const Casting& cp)
{
	std::cout << "Copy constructor called" << std::endl;
	*this = cp;
}

Casting::~Casting()
{
	std::cout << "Destructor called" << std::endl;
}

Casting& Casting::operator=(const Casting& op)
{
	if (this != &op)
	{
		this->av = op.av;
		this->arg = op.arg;
		this->integer = op.integer;
		this->duble = op.duble;
		this->flot = op.flot;
	}
	return (*this);
}

void	Casting::outString(void) const {
	charOut();
	intOut();
	doubleOut();
	floatOut();
}

void	Casting::staticCast(void) {
	if (this->arg.length() == 1 && (this->av[0] < '0' || this->av[0] > '9'))
	{
		this->character = av[0];
		this->integer = static_cast<int>(av[0]);
		this->duble = static_cast<double>(av[0]);
		this->flot = static_cast<float>(av[0]);
	}
	else if (is_number() || this->arg == "nan" || this->arg == "nanf" || this->arg == "+inf"
		|| this->arg == "+inff" || this->arg == "inf" || this->arg == "inff" || this->arg == "-inf"
		|| this->arg == "-inff")
	{
		this->character = static_cast<char>(strtod(av, 0));
		this->integer = static_cast<int>(strtod(av, 0));
		this->duble = static_cast<double>(strtod(av, 0));
		this->flot = static_cast<float>(strtod(av, 0));
	}
	else
	{
		throw std::invalid_argument("Error: invalid argument\n");
	}
}

void	Casting::charOut(void) const
{
	std::cout << "char\t:";
	if (std::isnan(duble) || std::isinf(duble))
		std::cout << "imposssible" << std::endl;
	else if (isprint(character) == 0)
		std::cout << "Non displayable" << std::endl;
	else
		std::cout << character << std::endl;
}

void	Casting::intOut(void) const
{
	std::cout << "int\t:";
	if (std::isnan(duble) || std::isinf(duble))
		std::cout << "impossible" << std::endl;
	else
		std::cout << "\'" << integer << "\'" << std::endl;
}

void	Casting::floatOut(void) const
{
	std::cout << "float\t:" << flot;
	if (flot - integer == 0)
		std::cout << ".0";
	std::cout << "f" << std::endl;
}

void	Casting::doubleOut(void) const
{
	std::cout << "double\t:" << duble;
	if (duble - integer == 0)
		std::cout << ".0";
	std::cout << std::endl;
}

bool	Casting::is_number(void) const
{
	std::string s = this->arg;
	std::string::iterator	i = s.begin();
	while (std::isdigit(*i) && i != s.end())
		++i;
	if (*i == '.' && i != s.end())
	{
		++i;
		while (std::isdigit(*i) && i != s.end())
			++i;
		if (*i == 'f' && i != s.end())
			++i;
	}
	return (i == s.end() && *--i != '.' && !s.empty());
}
