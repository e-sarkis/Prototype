#pragma once
#include "BaseSpawner.h"

// Spawns Plant subclass object instances of a given type parameter.
// Example:
//	BaseSpawner* roseSpawner = new Spawner<Rose>();
//	Plant* myRose = roseSpawner->spawnPlant();
template <class T>
class Spawner :
	public BaseSpawner
{
public:
	// Creates a Plant class implementation subclass object instance and returns a pointer to it.
	virtual Plant * spawnPlant() { return new T(); };
};