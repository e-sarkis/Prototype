#pragma once
#include <iostream>
#include "Plant.h"

// Plant class implementation subclass object spawned by Spawners with Violet-themed consturctor flavour text.
class Violet :
	public Plant
{
public:
	Violet() { std::cout << "Violets are blue!" << std::endl; };;
	~Violet() {};
};

