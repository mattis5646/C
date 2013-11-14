#include <stdio.h>
#include <stdlib.h>


void print (int size)
{
   	int c = 0;
	if (size == 0)
	{
	        printf("_*\n");
	        return;
	}
	for (; c < size; ++c)
	{
		printf("_");
	}
	printf("_*\n");
}

void help ()
{
    
	char temp[256];
    
	int count = 0;

    
	while (1)
	{
        	scanf("%s", temp);
        	switch (temp[0])
        	{
        		case 'w':
        		if (count > 0)
        		{
        		        --count;
        		}
        		print(count);
        		break;
       			case 'e':
        		print(count);
       			break;
       			case 'r':
        		++count;
        		print(count);
        		break;
        		case 'q':
        		return;
        		default:
        		break;
        	}
	}
}

int main (int argc, char *argv[])
{
 
	help();

	return 0;
}
