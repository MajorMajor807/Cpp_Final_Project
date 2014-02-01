#ifndef _NBODY_SYSTEM_H
#define _NBODY_SYSTEM_H

#include <nbody/VECTOR3.h>
#include <nbody/body.h>

#include <string>
#include <sstring>
#include <vector>

namespace nbody {
class System {
	int _numBodies;
	double _elapsed_time;
	vector _nBodyList;

	public:
	
	int get_numBodies() const {return _numBodies;}
	double get_elapsed_time() const {return _elapsed_time;}
	vector get_nBodyList() const {return _nBodyList;}	

	void set_numBodies(int new_num) {_numBodies = new_num;}
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
	
	
} // class System
} // namespace nbody
