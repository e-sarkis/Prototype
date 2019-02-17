#pragma once
#include "Plant.h"

class BaseSpawner
{
public:
	virtual ~BaseSpawner() {};
	virtual Plant * spawnPlant() = 0;
};
