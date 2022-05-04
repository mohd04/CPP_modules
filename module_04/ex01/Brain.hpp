#ifndef BRAIN_HPP
#define BRAIN_HPP

#pragma once
#include <iostream>

class Brain
{
public:
	Brain();
	Brain(Brain const &cp);
	~Brain();

	Brain& operator=(Brain const &op);

	void		generateIdea(int index, std::string idea);
	std::string const &getIdea(int index) const;

private:
	std::string	ideas[100];
};

#endif
