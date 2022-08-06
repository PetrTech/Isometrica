#pragma once
#include "Math.hpp"

class World {

};

class VoxelType {

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
}
