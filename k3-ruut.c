#include <stdio.h>
int main(int argc, char* argv [])
{
	printf("\narv\truut\n");    /*tulbale nimed*/
	int i,j;		    /*j= arvu ruututõstmiseks*/	
	for(i=1;i<=20;i++)          /*1-20-ni,20 kaasaarvatud*/
	{
		printf("%2d\t%3d\n",i,j=i*i);  /*j=i*i; i\tj */
	}	
	return 0;
}
