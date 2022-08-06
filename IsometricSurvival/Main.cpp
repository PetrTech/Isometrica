#include <iostream>
#include <iomanip>
#include <cstdlib>
#include <SFML/Graphics.hpp>
#include "Main.hpp"

int main(/*int argc, char* argv[]*/)
{
	printf("Starting Isometrica 2022");
	
	sf::RenderWindow window(sf::VideoMode(640,480), "Isometrica 2022");

	// Loading assets
	sf::Texture voxelTestTexture; // VOXEL TEST, DEV ONLY
	voxelTestTexture.loadFromFile("VoxelTest.png");
	voxelTestTexture.setSmooth(true);

	// game loop
	while (window.isOpen()) {
		sf::Event event;
		while (window.pollEvent(event)) {
			if (event.type == sf::Event::Closed) {
				window.close();
			}
		}

		window.clear();
		window.display();
	}

	return 0; // exit code 0, everything went as planned and you still have your PC and RAM! (Luckily no memory leaks happened. I hope.)
}