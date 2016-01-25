#ifndef DECIMAL_CONVERSION_H
#define DECIMAL_CONVERSION_H

#include <iostream>
#include <climits>
#include <vector>
#include <map>
#include <queue>
#include <stack>
#include <string>
#include <sstream>
#include <set>
#include <cmath>
using namespace std;

class DecimalConversion
{
protected:
	ostringstream ss;
	int base;
public:
	virtual string getConversion( int number )
	{
		if ( number == 0 )
			return "";
		int rem = number % base;
		getConversion( number/base );
		ss << rem;
		return ss.str();

	}
};

#endif