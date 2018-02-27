#include "stdafx.h"
#include "GeneratorFunctions.h"



Animal* GenerateAnimal()
{
	Animal* animalPointer = nullptr;
	
	switch (rand() % 5)
	{
	case 0:
		animalPointer = new Animal();
		break;
	case 1:
		animalPointer = new DogLike();
		break;
	case 2:
		animalPointer = new CatLike();
		break;
	case 3:
		animalPointer = new Dog();
		break;
	case 4:
		animalPointer = new Cat();
		break;
	}
	return animalPointer;
}

Animal** GenerateAnimalArray()
{
	Animal** animalArrayPointer = new Animal*[10];
	for (int i = 0; i < 10; i++)
	{
		animalArrayPointer[i] = GenerateAnimal();
	}
	return animalArrayPointer;
}

