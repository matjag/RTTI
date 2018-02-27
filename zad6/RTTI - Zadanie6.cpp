// RTTI - Zadanie6.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "DogLike.h"
#include "CatLike.h"
#include "Dog.h"
#include "Cat.h"
#include "GeneratorFunctions.h"

using namespace std;

// Rozwiazanie zadania.
void IdentifyAnimals(Animal** animalArrayPointer)
{
	for (int i = 0; i < 10; i++)
	{
		if (dynamic_cast<DogLike*>(animalArrayPointer[i]) != nullptr)
		{
			cout << "To jest " << typeid(*animalArrayPointer[i]).name() << endl;
			animalArrayPointer[i]->Identify();
			cout << endl;

		}
	}
}

int main()
{
	srand(time(NULL));
	IdentifyAnimals(GenerateAnimalArray());

	system("pause");
	return 0;
}

