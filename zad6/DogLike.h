#pragma once
#include <iostream>
#include "Animal.h"

class DogLike :
	public Animal
{
public:
	DogLike();
	~DogLike();

	void Identify();
};

