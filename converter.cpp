#include "DecimalConversion.h"
#include "BinaryConversion.h"
#include "OctalConversion.h"
#include "HexadecimalConversion.h"

int main()
{
	int number, choice;
	DecimalConversion* dc;

	while ( true )
	{
		cout << "Enter your choice." << endl;
		cout << "1. Binary conversion." << endl;
		cout << "2. Octal conversion." << endl;
		cout << "3. Hexadecimal conversion." << endl;
		cout << "4. Exit." << endl;

		cin >> choice;
		if ( choice != 4 )
		{
			cout << "Enter the number." << endl;
			cin >> number;
		}

		switch( choice )
		{
			case 1:
				dc = new BinaryConversion;
				cout << dc->getConversion( number )<< endl;
				break;
			case 2:
				dc = new OctalConversion;
				cout << dc->getConversion( number ) << endl;
				break;
			case 3:
				dc = new HexadecimalConversion;
				cout << dc->getConversion( number ) << endl;
				break;
			default:
				exit(0);
		}
	}

	system("pause");
	return 0;
}