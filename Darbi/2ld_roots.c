
#include <stdio.h>
#include <math.h>

int main(){

float a , b ,c,  x, delta_x, funkca, funkcb, funkcx;
int k = 0; 

printf("Lūdzu ievadi sākuma robežas vērtību:\n");
scanf("%f",&a);
printf("Lūdzu ievadi beigu robežas vērtību:\n");
scanf("%f",&b);
printf("Lūdzu ievadi vēlamo precizitāti (no 0 līdz 1):\n");
scanf("%f",&delta_x);
printf("Lūdzu ievadi, kādai f(x) vērtībai aprēķināt x vērtību (no 0 līdz 1):\n");
scanf("%f",&c);


funkca = cos(a/2)-c; funkcb = cos(b/2)-c;
if (funkca*funkcb>0)
    {
    printf("Intervala [%2f;%2f] cos(x) funkcijai", a,b);
    printf("Sakņu nav, vai tajā ir pāru saknes)\n");
    return 1;
    }
printf("        cos(%7.3f)=%7.3f\t\t\t\t", a , cos(a/2)-c);

    
while ((b-a)>delta_x){
       
        x = (a+b)/2;
        if (funkca*(cos(x/2)-c)>0)
         a=x;
        else
         b =x;
        k++;}
printf("\n%2d.iteracija: cos(%7.3f)=%7.3f\t",k, a , cos(a/2)-c);
printf("cos(%7.3f)=%7.3f\n",b , cos(b/2)-c);
printf("cos(%7.3f)=%7.3f\t",x , cos(x/2)-c);

printf ("\n\nSakne atrodas pie x =%3f, jo cos(x/2) ir %3f\n", x , cos(x/2)-c);
return 0;
}

//////////////////////////////

