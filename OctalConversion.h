#ifndef OCTAL_CONVERSION_H
#define OCTAL_CONVERSION_H

#include "DecimalConversion.h"

class OctalConversion : public DecimalConversion
{
public:
	OctalConversion()
	{
		base = 8;
	}
};

#endif
