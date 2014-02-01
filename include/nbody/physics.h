#ifndef _PHYSICS_H
#define _PHYSICS_H

#include "nbody/physics.h"
#include <nbody/VECTOR3.h>

namespace nBody {
	inline Vector3f vecAcc( Vector3f r1, Vector3f r2, float m_1 ) {};
	inline Vector3f vecVel(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1, float dt) {};
	inline Vector3f vecPos(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1, float dt) {};
} //namespace nBody

#endif
