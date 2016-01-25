#ifndef HEXADECIMAL_CONVERSION_H
#define HEXADECIMAL_CONVERSION_H

#include "DecimalConversion.h"

class HexadecimalConversion : public DecimalConversion
{
private:
	map<int, char> mappings;
public:
	HexadecimalConversion()
	{
		mappings.insert( make_pair<int, char>(10, 'A') );
		mappings.insert( make_pair<int, char>(11, 'B') );
		mappings.insert( make_pair<int, char>(12, 'C') );
		mappings.insert( make_pair<int, char>(13, 'D') );
		mappings.insert( make_pair<int, char>(14, 'E') );
		mappings.insert( make_pair<int, char>(15, 'F') );
	}

	virtual string getConversion( int number )
	{
		if ( number == 0 )
			return "";
		int rem = number % 16;

		getConversion( number/16 );

		if ( rem > 9 )
			ss << mappings.find( rem )->second;
		else
			ss << rem;

		return ss.str();
	}
};

#endif
