#pragma once
#include <iostream>
#include <cstdlib>
#include <ctime>
#include "Animal.h"
#include "DogLike.h"
#include "CatLike.h"
#include "Dog.h"
#include "Cat.h"

using namespace std;

Animal* GenerateAnimal();
Animal** GenerateAnimalArray();
