// RTTI - Zadanie4.cpp : Defines the entry point for the console application.
//

#include "stdafx.h"
#include <iostream>
#include <cstdlib>
#include <ctime>

using namespace std;

class Animal
{
public:
	Animal()
	{

	}
	virtual void MakeSound()
	{
		cout << "To jest klasa animal" << endl;
	}
};

class Dog : public Animal
{
public:
	Dog()
	{

	}
	void MakeSound()
	{
		cout << "Hau hau hau!!" << endl;
	}
};

class Cat : public Animal
{
public:
	Cat()
	{

	}
	void MakeSound()
	{
		cout << "Miau miau miau!!" << endl;
	}
};

Animal* GenerateAnimal()
{
	Animal* animalPointer = nullptr;
	srand(time(NULL));
	switch (rand() % 3)
	{
	case 0:
		animalPointer = new Animal();
		break;
	case 1:
		animalPointer = new Dog();
		break;
	case 2:
		animalPointer = new Cat();
		break;
	}
	return animalPointer;
}


int main()
{
	// Rozwiazanie zadania.
	Animal* ptr = GenerateAnimal();
	cout << "Nazwa wygenerowanej klasy: " << typeid(*ptr).name() << endl;
	ptr->MakeSound();
	system("pause");
    return 0;
}

