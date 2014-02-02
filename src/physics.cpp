#include <nbody/physics.h>
#include <nbody/VECTOR3.h>
#include <iostream>
#include <vector>
#include <nbody/body.h>

namespace nbody {

Vector3d vecAcc(std::vector<Body> syslist, Vector3d r1, double m_1) {
	Vector3d new_a = Vector3d( 0.0, 0.0, 0.0);
	for (size_t i = 0; i < syslist.size(); i++) {
		double distance = (r1-syslist[i].get_r()).norm();
		if (distance != 0.0) {
			new_a = new_a + (6.67384 * pow(10, -11) * m_1  * (r1-syslist[i].get_r()) / pow(distance, 3));
			//calculates effect from an outside object on the object's acceleration
			//and adds this effect to the new vector that will represent the new acceleration
		}
	}
	return new_a;
}

Vector3d vecVel(std::vector<Body> syslist, Vector3d r1, Vector3d v1, Vector3d a1, double dt) {
	Vector3d new_v = Vector3d(0.0,0.0,0.0);
	for (size_t i = 0; i < syslist.size(); i++) {
		double distance = (r1-syslist[i].get_r()).norm();
		if (distance != 0.0) {
			new_v = new_v + (v1 + a1 * dt);
		}
	}
	return new_v;

}

Vector3d vecPos(std::vector<Body> syslist, Vector3d r1, Vector3d v1, Vector3d a1, double dt) {
	Vector3d new_r = Vector3d(0.0,0.0,0.0);
	for (size_t i = 0; i < syslist.size(); i++) {
		double distance = (r1-syslist[i].get_r()).norm();
		if (distance != 0.0) {
			new_r = new_r + (r1 + v1 * dt + 0.5 * a1 * dt * dt);
		}
	}
	return new_r;
}

} // namespace nbody
