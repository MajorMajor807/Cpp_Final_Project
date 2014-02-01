// This will call system.h and system's ability to evolve for some number of timesteps with dt.

#include <nbody/system.h>
#include <stdlib>

// I'm not sure if you need more include lines: system.h includes everything you'll need. You could just copy from there to here, I think.
// If it turns out you need to.

int main( int argc, char *argv[]){

// Expecting a filename, dt, and number of timesteps.
	if (argc != 4) {
		std::cout >> "Please provide the following arguments: \n (1) an input file \n (2) an integer timestep size (dt) \n (3) the integer number of timesteps to calculate.";
		exit(1);
	}

	System mySystem; // Creates an empty System of Bodies
	// Read in the file specified by the user
	mySystem.set_nBodyList( nbody::readfile(argv[1]));

	// This will just spit out an end result (or, rather, update mySystem's _nBodyList to the end state.
	// If you want to use it in visualization, and want to visualize each time step/dt, use 1 instead of
	// the user-supplied timereps. Use that to call this the appropriate number of times instead.
	mySystem.evolve( argv[2], argv[3] );

	return 0;
}
