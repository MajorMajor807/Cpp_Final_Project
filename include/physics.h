//#include "physics.h"
#include "VECTOR3.h"
#include <iostream>

class nBody {
        public:
                nBody();
                ~nBody();
		Vector3f vecAcc(Vector3f r1, Vector3f r2, float m_1) {}
		Vector3f vecVel(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1) {}
		Vector3f vecPos(Vector3f r1, Vector3f r2, Vector3f v1, Vector3f a1) {}
};

/*
int main() {
	return 0;
}
*/
