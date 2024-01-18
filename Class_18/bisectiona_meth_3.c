
#include <stdio.h>
#include <math.h>


float modified_cos(float x, float A){
    return cos(x/2)-c;
}

void main(){
    float a,b,c, x, delta_x,y , funkca, funkcb, funkcx;
    int k = 0; 


  
    printf("Cien. liet., ludzu, ievadi vienādojuma sākuma robežas vērtību\n");
    scanf("%f ", &b);
    printf("Cien. liet., ludzu, ievadi vienādojuma beigu robežas vērtību.\n");
    scanf("%f ", &a);
    printf("Cien. liet., ludzu, ievadi vēlamo precizitāti (no 0 līdz 1):  \n");
	scanf("%f",&delta_x);
      printf("Cien. liet., ludzu, ievadi A vertibu sekojosam vienadojumam: cos(x/2)-A\n");
    scanf("%f", &c);
    if (c < cos(a) || c > cos(b)) {

        printf("Ievadītie parametri nav derīgi intervālā [%.2f;%2.f],līdzarto ar šīm vērtībām nav iespējams aprēķināt f(x) = cos/2 .\n", a, b);

        return 1;

    }
    while(x<b)
    {
        printf("%10.1f%10.1f\n",x, modified_cos(x,A));
        x += delta_x;
    }

}
int fun(){

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