#include<stdio.h>
#include<math.h>

float taisn(float);
float trapece(float);
float simpsons(float);

float a,b,acc,h, integr1=0, integr2;
int k, n=2;

int main(){


printf("Lūdzu ievadiet sākuma robežu a:\n");
scanf("%f",&a);
printf("Lūdzu ievadiet beigu robežu b:\n");
scanf("%f",&b);
printf("Lūdzu izvēlieties aprēķinu precizitāti:\n");
scanf("%f",&acc);

printf("Rezultāts, izmantojot taisnstūra metodi: %f\n", taisn(integr1));
printf("Rezultāts, izmantojot trapeces metodi: %f\n", trapece(integr1));
printf("Rezultāts, izmantojot Simpsona metodi: %f\n", simpsons(integr1));

}

float taisn(float integr2){
	
	integr2=(b-a)*(cos(a/2)+cos(b/2))/n;

	while(fabs(integr2-integr1)>acc){
	n*=2;
	h=(b-a)/n;
	integr1=integr2;
	integr2=0;

		for(k=0;k<n;k++){
		integr2+=h*cos((a+(k+0.5)*h)/2);
		}
	}
return integr2;

}

float trapece(float integr2){

	integr2=(b-a)/n*(cos(a/2)+cos(b/2))/n;

	while(fabs(integr2-integr1)>acc){
	n*=2;
	h=(b-a)/n;
	integr1=integr2;
	integr2=0;

		for(k=0;k<n;k++){
		integr2+=h*cos((a+(k+0.5)*h)/2);
		}
	}
return integr2;
}
float simpsons(float integr2){

	integr2=(b-a)/3*n*(cos(a/2)+4*cos((a+b)/2) +cos(b/2))/n;

	while(fabs(integr2-integr1)>acc){
	n*=2;
	h=(b-a)/n;
	integr1=integr2;
	integr2=0;

		for(k=0;k<n;k++){
		integr2+=h*cos((a+(k+0.5)*h)/2);
		}
	}
return integr2;
}
