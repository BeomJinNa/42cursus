#include <iostream>
#include "Dog.hpp"

Dog::Dog(void)
{
	mType = "Dog";
	std::cout << "A dog has been created." << std::endl;
}

Dog::Dog(const Dog& source)
	: Animal(source)
{
	mType = "Dog";
	std::cout << "A dog has been created." << std::endl;
}

Dog&	Dog::operator=(const Dog& source)
{
	if (this != &source)
	{
		Animal::operator=(source);
		std::cout << "A dog has been copied." << std::endl;
	}

	return (*this);
}

Dog::~Dog(void)
{
	std::cout << "A dog has been removed." << std::endl;
}

void	Dog::makeSound(void) const
{
	std::cout << "Bark!" << std::endl;
}
