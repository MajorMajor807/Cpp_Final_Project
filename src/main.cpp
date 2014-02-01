// This will call system.h and system's ability to evolve for some number of timesteps with dt.

#include <nbody/system.h>

// I'm not sure if you need more include lines: system.h includes everything you'll need. You could just copy from there to here, I think.
// If it turns out you need to.

int main( /* figure out how to get this to take 1) a filename for input 2) a dt and 3) a number of desired time reps [timereps*dt will = time]*/) {

	System mySystem; // Creates an empty System of Bodies
	// Read in the file specified by the user
	mySystem.set_nBodyList( nbody::readfile(/*filename given from the command line (1) above */));

	// This will just spit out an end result (or, rather, update mySystem's _nBodyList to the end state.
	// If you want to use it in visualization, and want to visualize each time step/dt, use 1 instead of
	// the user-supplied timereps. Use that to call this the appropriate number of times instead.
	mySystem.evolve( /* specified dt */, /* specified timereps */ );

	return 0;
}
