#include <stdio.h>

int main (int argc, char *argv[]){
        
        printf("\n\t Arvutused\n");
        
        double x0 = 2.0;        
        double x1 = 12;
        int n = 4;                        
        double a;                        
        double b;                        
        int i;                               
        double dx;                        
        double c;                       
        double y;                
        double dxS;                        
        double S;                        
        
        i=0;
        a=x0;
        dx=(x1-x0)/n;
        while (i<n)
        {
                b = a + dx;
                c = a + dx/2;
                dxS = dx*c*c;
                y = c*c;
                S += dxS;
                printf("\n i=%d a=%f b=%f c=%f y=%f S=%f\n", i, a, b, c, y, dxS);
                i = i+1;
                a = b;
        }
        printf("\n Kogupindala S=%f \n\n", S);
                
        return 0;
}


