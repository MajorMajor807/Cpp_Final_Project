#ifndef _PHYSICS_H
#define _PHYSICS_H

#include "nbody/physics.h"
#include <nbody/VECTOR3.h>

namespace nbody {
	Vector3f vecPos(Vector3f r1, Vector3f v1, Vector3f a1, float dt);
	Vector3f vecVel(Vector3f r1, Vector3f v1, Vector3f a1, float dt);
	Vector3f vecAcc( Vector3f r1, float m_1 );

} //namespace nBody

#endif
