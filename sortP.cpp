#include "head.h"
void P_Sort ( char *Mass, int n )
{
	char TMP;
	int i;
	bool change = 0;
	do
	{
		change = 0;
		for( i = 1; i < n - 1; i++ )
		{
			if( Mass[ i ] >  Mass[ i + 1 ] )
			{
				TMP = Mass[ i + 1 ];
				Mass[ i + 1 ] = Mass[ i ];
				Mass[ i ] = TMP;
				change = 1;
			}
		}
	}while( change );
}