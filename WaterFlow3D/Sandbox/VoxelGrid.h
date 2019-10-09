#pragma once
#include <array>
#include <vector>
#include "Voxel.h"
#include <iostream>
class VoxelGrid
{
public:
	static constexpr int SizeX = 120;
	static constexpr int SizeY = 120;
	//static constexpr double ScaleFactor = 0.1;
//	std::array<Voxel, SizeX * SizeY> Raw_Data;
	std::vector<Voxel> Raw_Data;
	VoxelGrid() : Raw_Data(SizeX* SizeY) {};
	~VoxelGrid() {};
	bool InFlowBounds(int x, int y)
	{
		return x > 0 && y > 0 && x < SizeX - 1 && y < SizeY - 1;
	}
	bool InBounds(int x, int y)
	{
		return x >= 0 && y >= 0 && x < SizeX && y < SizeY;
	}
	Voxel& Get(int x, int y)
	{
		if (!InBounds(x,y)) {
			std::cout << "Out of grid access violation\n";
		}
		return Raw_Data[y + (x * SizeY)];
	}
};

