#include <iostream>
#include "Cat.hpp"

Cat::Cat(void)
{
	mType = "Cat";
	std::cout << "A cat has been created." << std::endl;
}

Cat::Cat(const Cat& source)
	: Animal(source)
{
	mType = "Cat";
	std::cout << "A cat has been created." << std::endl;
}

Cat&	Cat::operator=(const Cat& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		std::cout << "A cat has been copied." << std::endl;
	}

	return (*this);
}

Cat::~Cat(void)
{
	std::cout << "A cat has been removed." << std::endl;
}

void	Cat::makeSound(void) const
{
	std::cout << "Meow~" << std::endl;
}
