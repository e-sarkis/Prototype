#pragma once
#include <iostream>
#include "Plant.h"

// Plant class implementation subclass object spawned by Spawners with Rose-themed consturctor flavour text.
class Rose :
	public Plant
{
public:
	Rose() { std::cout << "Roses are red!" << std::endl; };
	~Rose() {};
};

