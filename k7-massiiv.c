#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
    	int nr [100];
   	int i;
   	double rk = 0;
    
    	for(i = 0; i < 100; i = i + 1)
	{
        	nr [i] = 20 + rand() % 21;
        }

        for(i = 0; i < 100; i = i + 1)
	{
        
        	if(i % 10 == 0)
       		{
           		printf("\n");
       		}
          
        	{
            		printf(" nr %d = %d\n", i, nr [i]);
       		}
    	}
    	for(i = 0; i<100; i++)
	{
        	rk += nr [i] * nr [i]; 
   	}
    
   	printf("\nRuutkeskmine = %f\n", rk / 100); 
    
    	return 0;
}
