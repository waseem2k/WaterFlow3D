#include "Vector.h"
struct Particle{
	static const constexpr float Mass = 10;
	float Density = 0;
	float Pressure;
	Vector Force;
	Vector Position;
	Vector PositionOld;
};
