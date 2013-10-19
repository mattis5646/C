/*loop tsükkel kasutades For*/

#include <stdio.h>
int main (int argc, char *argv[])
{	
	printf("\nfor tsükkel:\n\n");       // annab 						     algusesse tühja rea
	int i,j;                            // i= rida; j= tulp
	
	for (i = 0; i <= 5; i++)            // välimine tsükkel 
	{
		for (j = 0; j <= 9; j++)    // sisemine tsükkel
		printf("%.2d ", i*10+j);    // väljund	
		printf("\n");               // peale tsüklit reavahetus
	}	
	printf("\n");                       // annab lõppu uue rea
}

/* igale välistsükli väärtusele (nt: i=1), teeb sisemine tsükkel vastava väärtuse (nt: j=1) kuni tsükli lõpuni, ehk väline tsükkel prindib rida ja sisemine tulpa*/


/* loop tsükkel kasutades While */


#include <stdio.h>
int main (int argc, char *argv[])
{
	printf ("\n\nwhile tsükkel:\n\n");

	int row, col, colmax, rowmax, y;          
        row = 0;  				  
	colmax = 9; 				  	
	rowmax = 50; 				  
	
	while (row <= rowmax)			  
	{	
		col = 0;			  
		while (col <= colmax)		  
		{
			y = row + col;            
			printf ("%.2d ", y);      
			col = col + 1;            
		}
		printf ("\n");
		row = row + 10;
	}
	printf ("\n");
}

// liiga lihtne et kommenteerida...

