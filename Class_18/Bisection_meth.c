
#include <stdio.h>
#include <math.h>

int main(){

float a = 0.01 , b=1.5*M_PI , x, delta_x=1.e-3/*0.001*/, funkca, funkcb, funkcx;
int k = 0; 
float A;
printf("Cien. liet., ludzu, ievadi A vertibu sekojosam vienadojumam: sin(x)-A\n");
scanf("%f", &A);

funkca = sin(a)-A; funkcb = sin(b)-A;
if (funkca*funkcb>0){
    printf("intervala [%2f;%2f] sin(x) funkcijai", a,b);
    printf("Saknju nav ( vai taja ir paru saknes)\n");
    return 1;}
printf("        sin(%7.3f)=%7.3f\t\t\t\t", a , sin(a)-A);

    
while ((b-a)>delta_x){
        k++;
        x = (a+b)/2;
        if (funkca*(sin(x)-A)>0)
        a =x;
        else
        b =x;
        printf("%2d. iteracija: sin(%7.3f)=%7.3f\t",k, a , sin(a)-A);
        printf("sin(%7.3f)=%7.3f\t",x , sin(x)-A);
        printf("sin(%7.3f)=%7.3f\n",b , sin(b)-A);}


printf ("Sakne atrodas pie x =%3f, jo sin(x) ir %3f\n", x , sin(x)-A);
return 0;
    }

//////////////////////////////

