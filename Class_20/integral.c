#include <stdio.h>
#include <math.h>
//Taisnstūru metode
void main(){
    float a=0.,b=10, eps=1.e-4,h,integer1=0.,integer2;
    int k,n=2;
    
    integer2=(b-a)*(cos(a/2)+cos(b/2))/n;//(b-a)/2.*sin(a)+(b-a)/2.*sin(b)
    while(fabs(integer2-integer1)>eps){
        n*=2;
        h=(b-a)/n;
        integer1=integer2;
        integer2=0.;
        
        for(k=0;k<n;k++)
        {
            integer2+=h*cos((a+(k+0.5)*h)/2);
        }
    printf("(solis
    - %d) %f\n", n, integer2);
    }
    

    printf("Integraalja veertiiba: %.2f\n", integer2);
}