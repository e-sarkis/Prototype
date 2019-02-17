#pragma once
#include "BaseSpawner.h"

template <class T>
class Spawner :
	public BaseSpawner
{
public:
	virtual Plant * spawnPlant() { return new T(); };
};