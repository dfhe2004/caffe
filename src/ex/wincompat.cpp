#include "ex/wincompat.h"
#include <cmath>

double round(double r){
    return (r > 0.0) ? floor(r + 0.5) : ceil(r - 0.5);
}

namespace wincompat {
	double log2( double n ) {  
		return log(n) / log(2);  
	}
}
