#include "Identify.hpp"

int main(void)
{
	Base*	p = generate();
	identify(p);
	identify(*p);
}
