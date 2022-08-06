#pragma once
#include "Math.hpp"
#include<iostream>  
#include<vector>

class World {
	public: std::vector<Voxel> voxels;
};

enum class VoxelType {
	testingVoxel
};

class Voxel {
	public: Math::Vector2 position;
	public: VoxelType type;

	public: 
		Voxel(Math::Vector2 _position, VoxelType _type) {
			position = _position;
			type = _type;
		}
};

World generateTestWorld() {
	World progress;

	for (int x = 0; x < 5; x++)
	{
		for (int y = 0; y < 5; y++)
		{

		}
	}

	return progress;
}
