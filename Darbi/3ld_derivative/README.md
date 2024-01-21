# :bat: 3.Laboratorijas darbs Diferencēšanas metode. :bat:
## F(x) = cos(x/2)   

Diferencēšanas metode tiek pielietota, lai iegūtu 1.kārtas un 2.kārtas atvasinājumu cos(x/2) funkcijai, izmantojot analītisko un skaitlisko formulu.

:paperclip: Šeit var apskatīt [F(x)=cos(x/2) grafiku.](https://pages.github.com/).

```
#include<stdio.h>
#include<math.h>


int main(){

float a,b,x,delta_x;
double y,y_an,y_an1,y1,y_an2,y2;

FILE*derivative;

derivative = fopen("derivative.dat", "w");
	
printf("Izvēlies funkcijas sākuma robežas vērtību a:\n");
scanf("%f", &a);
printf("Izvēlies funkcijas beigu robežas vērtību b:\n");
scanf("%f", &b);
printf("Izvēlies funkcijas precizitātes vērtību dx:\n");
scanf("%f", &delta_x);

fprintf(deriv,"\tx\t\tf(x)\tf\'(x) analit.\tf\'(x) skaitl.\tf\'\'(x) analit.\tf\'\'(x) skaitl.\n");
printf("\tx\t\tf(x)\tf\'(x) analit.\tf\'(x) skaitl.\tf\'\'(x) analit.\tf\'\'(x) skaitl.\n");
x=a;
while(x<b){
	y=cos(x/2);
    y_an=cos(x/2+delta_x);
	y1=((-1)*sin(x/2))/2;
    y_an1=(y_an-y)/delta_x;
    y2=((-1)*cos(x/2))/4;
    y_an2=(y_an-2*y+cos(x/2-delta_x))/pow(delta_x,2);
	printf("%0.2f\t%4.2f\t%5.2f\t%13.2f\t%14.2f\t%13.2f\n",x,y,y1,y_an1,y2,y_an2);
    fprintf(deriv,"%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\t%10.2f\n",x,y,y1,y_an1,y2,y_an2,);
        x+=delta_x;
	}
fclose(derivative);
}


```