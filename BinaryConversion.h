#ifndef BINARY_CONVERSION_H
#define BINARY_CONVERSION_H

#include "DecimalConversion.h"

class BinaryConversion : public DecimalConversion
{
public:
	BinaryConversion()
	{
		base = 2;
	}
};

#endif
