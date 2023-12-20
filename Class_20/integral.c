#include <stdio.h>
#include <math.h>

void main(){
    float a=0.,b=M_PI/2, eps=1.e-3,h,integer1=0.,integer2;
    int k,n=2;

    integer2=(b-a)*(sin(a)+sin(b))/n;//(b-a)/2.*sin(a)+(b-a)/2.*sin(b)
    while(fabs(integer2-integer1)>eps){
        n*=2;
        h=(b-a)/n;
        integer1=integer2;
        integer2=0.;
        for(k=0;k<n;k++)
            integer2+=h*sin(a+(k+0.5)*h);

    }
    printf("Inegraalja veertiiba: %.2f\n", integer2);
}