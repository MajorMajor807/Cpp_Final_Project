#ifndef _NBODY_SYSTEM_H
#define _NBODY_SYSTEM_H

#include <nbody/VECTOR3.h>
#include <nbody/body.h>

#include <string>
#include <sstream>
#include <vector>

namespace nbody {
class System {
	int _numBodies;
	double _elapsed_time;
	std::vector<Body> _nBodyList;

	public:
	
	int get_numBodies() const {return _numBodies;};
	double get_elapsed_time() const {return _elapsed_time;};
	std::vector<Body> get_nBodyList() const {return _nBodyList;};

	void set_numBodies(int new_num) {_numBodies = new_num;};
	void set_elapsed_time(double new_time) {_elapsed_time = new_time;};
	void set_nBodyList(vector new_list) {_nBodyList = new_list;};

	std::vector<Body> readFile( std::string fileName );

	void evolve( double dt, double timereps );

} // class System
} // namespace nbody

#endif // _NBODY_SYSTEM_H
