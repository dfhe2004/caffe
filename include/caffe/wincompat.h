#ifndef _HEADER_WIN_COMPAT_20160812_INCLUDED_
#define _HEADER_WIN_COMPAT_20160812_INCLUDED_

typedef unsigned int uint;
#define snprintf _snprintf

#include <cmath>
#include <process.h>
#include <boost/math/special_functions/fpclassify.hpp>

using boost::math::isnan;
using boost::math::isinf;


double round(double r);

namespace std{
	inline bool signbit(double num) { return _copysign(1.0, num) < 0; }
}

namespace caffe {
	#define kBNLL_THRESHOLD 50.0
}

namespace wincompat {
	double log2( double n );
}

#define __builtin_popcount __popcnt 
#define __builtin_popcountl __popcnt

#endif //_HEADER_WIN_COMPAT_20140627_INCLUDED_


