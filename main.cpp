#include "head.h"


void main()
{
	char *Mass;
	int n;
	int i;
	srand(time(NULL));
	printf( "Input N: " );
	scanf ( "%d", &n );
	Mass = new char ( n );
	for( i = 1; i < n; i++ )
	{
		Mass[ i ] = rand()%255;
	}
	for( i = 1; i < n; i++ )
	{
		printf( "%d\n", Mass[ i ] );
	}
	P_Sort( Mass, n );
	MergeSort( Mass, 1, n);
	for( i = 1; i < n; i++ )
	{
		printf( "%d\n", Mass[ i ] );
	}
	system( "pause" );
}