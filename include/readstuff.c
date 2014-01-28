//#include <Vector3>
#include <vector>
#include <fstream>
#include <string>
#include <iostream>


class Body {

	Vector3f _r, _v, _a;
	float _m;
	
	public:
	
	// Getters
	Vector3f get_r {return _r;};
	Vector3f get_v {return _v;};
	Vector3f get_a {return _a;};
	float get_m {return _m;};
	
	// Setters
	void set_r(Vector3f new_r) { _r = new_r;};
	void set_v(Vector3f new_v) { _v = new_v;};
	void set_a(Vector3f new_a) { _a = new_a;};
	void set_m(float new_m) { _m = new_m;};

}


/*vector<vector>*/ int  readFile(/* std::string *fileName*/ ) {
	std::ifstream fInput;
	fInput.open( "test_files/test.in" );
	int intNumBodies;
	std::string line;
	fInput >> intNumBodies;
	if (intNumBodies == 5) {
		std::cout << "Value has been read.\n";
	}
	else {
		std::cout << "Value has not been read.\n";
	}
	std::cout << intNumBodies << "\n";
	
	std::stringstream linestream(line);

	while( getline( fInput, line ) ) {
		//std::cout << line << "\n" ;
		
	}

	fInput.close();
	return 0;
}

int main() {
	readFile( );
	return 0;
}
