#include <iostream>
#include <vector>
#include "Spawner.h"
#include "Rose.h"
#include "Violet.h"

// Display poetic messages to the terminal window.
int main()
{
	// Spawn a Rose via prototype pattern Spawner
	BaseSpawner* roseSpawner = new Spawner<Rose>();
	Plant* myRose = roseSpawner->spawnPlant();

	// Spawn a Violet via prototype pattern Spawner
	BaseSpawner* violetSpawner = new Spawner<Violet>();
	Plant* myViolet = violetSpawner->spawnPlant();

	// Prompt user to end program
	std::cout << std::endl << "Press ENTER to continue!" << std::endl;
	std::cin.get();

	return 0;
}