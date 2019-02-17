#include <iostream>
#include <vector>
#include "Spawner.h"
#include "Rose.h"
#include "Violet.h"

int main()
{

	BaseSpawner* roseSpawner = new Spawner<Rose>();
	BaseSpawner* violetSpawner = new Spawner<Violet>();

	Plant* myRose = roseSpawner->spawnPlant();
	Plant* myViolet = violetSpawner->spawnPlant();

	return 0;
}