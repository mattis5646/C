#include <stdio.h>
int main(int argc, char * argv[]) {

    double x0=2.0;
    double x1=12.0;
    int n=4;
    int i;
    double a;
    double b;
    double dx;
    double c;
        double y;
        double S;
        
        i=0;
    a=x0;
    dx=(x1-x0)/n;
    
        while(i<n)
        {
                b=a+dx;
                c=b-dx/2;
                y=c*c;
                S=c*y;
                printf("i=%d a=%5f b=%f c=%f y=%f S=%f\n", i, a, b, c, y, S);
                a=b;
                i=i+1;
        }        
        
    return 0;
}


