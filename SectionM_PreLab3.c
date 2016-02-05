// SectionM_PreLab3.c
// Program that determins the area of a square, cube, or circle. determined by the user. utilizing a switch.
// Author: Jason Pulis

#include <stdio.h>
#include <ctype.h> // for isdigit()



int main (void)
{
	
	// declare variables
	int area = 7;
	int measurement;
	double product;

	// get input
	printf( "area calculation\n" "----------------\n\n" );

	do															// start program loop for repeted sequences 
	{
	printf( "Please select a shape below to calculate it's area.\n" );
	printf( "--------------------------------------------------\n" );
	printf( "(1) square\n" "(2) cube\n" "(3) circle\n" "(5) end\n" );
	scanf_s( "%d", &area );

		switch (area)
		{
		case 1:													// area of a square with catch for 0 or neg. entry
			do
			{
				printf( "Enter the length of the side: " );
				scanf_s( "%d", &measurement );

					if (measurement > 0)						// do math
					{
						product = measurement * measurement;
			
					}
					else
					{
						printf( "\n\nHonestly? Entries can't be negative or 0. It's a measurement after all.\n\n" );
					}
			}while (measurement <= 0);
						
			printf( "\n\nThe area of a square with a width of %d is %.0lf.\n\n\n", measurement, product);
			
			break;
			
		case 2:													// area of a cube with a catch for 0 or neg. entry
			do
			{
				printf( "Enter the length of the side: " );
				scanf_s( "%d", &measurement );
				
					if (measurement > 0)						//do math
					{
						product = 6 * measurement * measurement;
			
					}
					else
					{
						printf( "\n\nHonestly? Entries can't be negative or 0. It's a measurement after all.\n\n" );
					}
			}while (measurement <= 0);
						
			printf( "\n\nThe area of a cube with a width of %d is %.0lf.\n\n\n", measurement, product);

			break;

		case 3:													// area of a circle with a catch for 0 or neg. entry
			do
			{
				printf( "Enter the length of the radius: " );
				scanf_s( "%d", &measurement );
				
					if (measurement > 0)						// do math
					{
						product = 3.14159 * measurement * measurement;
			
					}
					else
					{
						printf( "\n\nHonestly? Entries can't be negative or 0. It's a measurement after all.\n\n" );
					}
			}while (measurement <= 0);
						
			printf( "\n\nThe area of a circle with a radius of %d is %.2lf.\n\n\n", measurement, product);

			break;

		case 5:													// escape line
			break;

		default:												// case for bad choice at initial selection
			printf ( "\n\nIt's not rocket science. 1, 2, 3, or 5 to escape. Those are the options.\n\n" );
			break;
		} 
	}while ( area != 5 );										// end loop
	

return 0;
}
