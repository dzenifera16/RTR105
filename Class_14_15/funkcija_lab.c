#include<stdio.h>
#include<math.h>
double mans_cosinus(double x){
 double a, S;
 int k = 0;

 //printf("y=cos(%2.f)=%2f\n",x, y);
 
 a = (pow(-1,k)*pow(x, 2*k))/(1.);
 S = a;
 printf("%2.f\t%8.2f\t%8.2f\n",x, a, S);

 while (k<10){
   k++;
   a= a * (-1) *x*x / (4*(2*k)*(2*k-1));
   S = S + a ;
   printf("%2.f\t%8.2f\t%8.2f\n",x, a, S);
    
  }
  return S;
}
 void main(){
  double x =2.05,y , yy;
  y = cos(x/2);
  printf("standarta funkcija cos- y=cos(%.2f/2)=%.2f\n", x, y);
  yy = mans_cosinus(x);
  printf("lietotāja funkcija - y=mans_cosinus(%.2f/2)=%.2f\n", x, yy);
    /* code */
 }
 




