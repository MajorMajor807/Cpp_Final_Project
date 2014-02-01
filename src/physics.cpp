#include <nbody/physics.h>
#include <nbody/VECTOR3.h>
#include <iostream>
#include <vector>
#include <nbody/body.h>


int total_a_x = 0;
int total_a_y = 0;
int total_a_z = 0;
std::vector nBodyList = readstuff( "test.in");
int nBodies = nBodyList.size();

Vector3f nBody::vecAcc(Vector3f r1, Vector3f r2, float m_1) {
	Vector3f new_a = 0;
	for (i = 0; i < distance; i++) {
		float distance = (r1-r2).nom();
		if (distance != 0.0) {
			new_a += 6.67384 * pow(10, -11) * m_1  * (r1-r2) / pow(distance, 3)
			//calculates effect from an outside object on the object's acceleration
			//and adds this effect to the new vector that will represent the new acceleration
		}
	}
	return new_a;
}

Vector3f nBody::vecVel(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1) {
	Vector3f new_v = 0;
	for (i = 0; i < nBodies; i++) {
		float distance = (r1-r2).nom();
		if (distance != 0.0) {
			new_v += v1 + a1 * dt;
		}
	}
	return new_v;

}

Vector3f nBody::vecPos(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1) {
	Vector3f new_r = 0;
	for (i = 0; i < nBodies; i++) {
		float distance = (r1-r2).nom();
		if (distance != 0.0) {
			new_r += r1 + v1 * dt + 0.5f * a1 * dt * dt;
		}

	}
	return new_r;
}


