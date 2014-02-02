#ifndef _PHYSICS_H
#define _PHYSICS_H

#include "nbody/physics.h"
#include <nbody/VECTOR3.h>
#include <nbody/body.h>
#include <vector>

namespace nbody {
	Vector3d vecPos(std::vector<Body> syslist, Vector3d r1, Vector3d v1, Vector3d a1, double dt);
	Vector3d vecVel(std::vector<Body> syslist, Vector3d r1, Vector3d v1, Vector3d a1, double dt);
	Vector3d vecAcc(std::vector<Body> syslist, Vector3d r1, double m_1 );

} //namespace nBody

#endif
