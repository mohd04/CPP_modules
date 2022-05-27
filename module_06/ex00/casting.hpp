#ifndef CASTING_HPP
# define CASTING_HPP

#pragma once
#include <iostream>
#include <cmath>
#include <cstring>
#include <limits>
#include <stdexcept>

class Casting
{
public:
	Casting();
	Casting(char *arg);
	Casting(const Casting& cp);
	~Casting();

	Casting& operator=(const Casting& cp);

	void	staticCast(void);
	void	outString(void) const;
	void	charOut(void) const;
	void	intOut(void) const;
	void	doubleOut(void) const;
	void	floatOut(void) const;
	bool	is_number(void) const;

private:
	char*		av;
	std::string	arg;
	char		character;
	int			integer;
	float		flot;
	double		duble;
};

#endif
