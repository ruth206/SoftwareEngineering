#include "task1-functions.h"
#include <iostream>
#include <math.h>
using namespace std;

#define KM_PER_MILE 1.609344

// setEngineMode - outputs the engine mode based on speed S (mph) and battery level B (%)
// Returns 0 for battery mode and 1 for petrol
int setEngineMode(int S, int B)
{

	// ************************
	// WRITE YOUR SOLUTION HERE
	// ************************
	bool t1 = false;
	if ((S < 10) && (S >= 0)) { //if its not this then go to else if
	}
		else if ((S <= 10) && (S < 30)) {		//if its not this then go to else
	}
			if (B <= 45) {
					return 0;
	}
		else {						//then return 1 for petrol mode	
			return 1;
	}

	if (t1 == true) {
		if (B <= 25) {
			return 0;
		}
		else {
			return 1;
		}
	}

}	//Change this
	//return 0;
