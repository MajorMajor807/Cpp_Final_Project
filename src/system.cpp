#ifndef _NBODY_SYSTEM_H
#define _NBODY_SYSTEM_H

#include <nbody/VECTOR3.h>
#include <nbody/body.h>

#include <string>
#include <sstream>
#include <vector>
#include <stddef.h>

namespace nbody {
class System {
	double _elapsed_time;
	vector _nBodyList;

	public:
	
	double get_elapsed_time() const {return _elapsed_time;}
	vector get_nBodyList() const {return _nBodyList;}	

	void set_elapsed_time(double new_time) {_elapsed_time = new_time;}
	void set_nBodyList(vector new_list) {_nBodyList = new_list;}

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
				// linestream is a string stream. line is a string that holds the current line in the file.
				// This next line uses linestream to find candidates for all of the "new_" variables
				// in the string stored in `line`.
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

	void evolve( float dt, float timereps ) {
		// Do the following `timereps` times.
		for (size_t iter; iter < timereps; ++iter) {
			// And do it for every body in the system.
			for (size_t idx; idx < _nBodyList.size(); ++idx) {
				_nBodyList[idx].set_a = nbody::vecAcc(_nBodyList[idx].get_r(), _nBodyList[idx].get_m());
				_nBodyList[idx].set_v = nbody::vecVec(_nBodyList[idx].get_r(), _nBodyList[idx].get_v(), _nBodyList[idx].get_a(), dt);
				_nBodyList[idx].set_r = nbody::vecPos(_nBodyList[idx].get_r(), _nBodyList[idx].get_v(), _nBodyList[idx].get_a(), dt);
				
			}
		}
			
	}
	
} // class System
} // namespace nbody
