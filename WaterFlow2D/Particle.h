#include "Vector.h"
struct Particle{
	float Mass = 1;
	float Density = 0;
	float Pressure;
	Vector Force;
	Vector Position;
	Vector PositionOld;
};
