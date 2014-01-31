#include "physics.h"
#include "VECTOR3.h"
#include <iostream>

/*
nBody::nBody() : 
nBody::~nBody() {

}
*/

//This should not be defined here. It should be passed as an argument? I'm not sure ....
// This is temporary.
int nBodies = 10;
//number of bodies in the system
//int total_a_x = 0;
//int total_a_y = 0;
//int total_a_z = 0;
//vector nBodyList =

Vector3f nBody::vecAcc(/*Vector3f r1, Vector3f r2, float m_1*/) {
	Vector3f new_a = Vector3f(0.0,0.0,0.0);
	for (int i = 0; i < nBodies; i++) {
		float distance = (r1-r2).norm();
		if (distance != 0.0) {
			// SWH--- I've done some casting into floats here to get it to compile.
			//        but we should really be using Vector3d I think, for precision.
			new_a = new_a + (float(6.67384 * pow(10, -11) * m_1)  * (r1-r2) / float(pow(distance, 3)));
			//calculates effect from an outside object on the object's acceleration
			//and adds this effect to the new vector that will represent the new acceleration
		}
	}
	return new_a;
}

Vector3f nBody::vecVel(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1, float dt) {
	Vector3f new_v = Vector3f(0.0,0.0,0.0);
	for (int i = 0; i < nBodies; i++) {
		float distance = (r1-r2).norm();
		if (distance != 0.0) {
			new_v = new_v + (v1 + a1 * dt);
		}
	}
	return new_v;

}

Vector3f nBody::vecPos(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1, float dt) {
	Vector3f new_r = Vector3f(0.0,0.0,0.0);
	for (int i = 0; i < nBodies; i++) {
		float distance = (r1-r2).norm();
		if (distance != 0.0) {
			new_r = new_r + (r1 + v1 * dt + 0.5f * a1 * dt * dt);
		}

	}
	return new_r;
}


int main() {
	return 0;
}


#endif
