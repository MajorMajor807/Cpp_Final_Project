#ifndef _NBODY_BODY_H
#define _NBODY_BODY_H

#include <VECTOR3.h>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>
#include <sstream>

namespace nbody {
	class Body {

		Vector3f _r, _v, _a;
		float _m;
	
		public:
	
		// Getters
		Vector3f get_r() const {return _r;}
		Vector3f get_v() const {return _v;}
		Vector3f get_a() const {return _a;}
		float get_m() const {return _m;};
		
		// Setters
		void set_r(Vector3f new_r) { _r = new_r;};
		void set_v(Vector3f new_v) { _v = new_v;};
		void set_a(Vector3f new_a) { _a = new_a;};
		void set_m(float new_m) { _m = new_m;};
	
	};
} //namespace nbody

std::vector<Body> readFile( std::string fileName ) {
	std::ifstream fInput;
	fInput.open( fileName );
	std::string line;
	std::vector<Body> vecBodies;
	
	int i = 0;
	while( getline( fInput, line ) ) {
		std::istringstream linestream(line);
		if ( i != 0 ) {
			Vector3f new_r, new_v, new_a;
			float new_m;
			linestream >> new_r >> new_v >> new_a >> new_m ;
			
			Body newBody;
			newBody.set_r(new_r);
			newBody.set_v(new_v);
			newBody.set_a(new_a);
			newBody.set_m(new_m);
			vecBodies.push_back(newBody);
		}
		i++;
	}
	fInput.close();
	return vecBodies;
}
