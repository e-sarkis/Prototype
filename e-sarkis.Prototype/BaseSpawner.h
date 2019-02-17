#pragma once
#include "Plant.h"

// Abstract Spawner class. See Spawner.h for concrete implementation.
class BaseSpawner
{
public:
	virtual ~BaseSpawner() {};
	virtual Plant * spawnPlant() = 0;
};
