# :bat: 1.Laboratorijas darbs Teilora rindas. :bat:
## F(x) = cos(x/2)   
Šī programma izmanto Teilora rindas paplašinājumu, lai aprēķinātu x/2 kosinusu. Šo kodu izmantojot, ir iespējams precīzi noskaidrot funkcijas n-tā locekļa vērtību un vienlaikus aprēķināt visu iepriekšējo locekļu summu, izmantojot rekurences reizinātāju. Tas nozīmē, ka programma ļauj pastāvīgi pētīt katru locekli, līdzarto nodrošinot iespēju izprast gan individuālās vērtības, gan to, kā tās uzkrājas kopā.


:paperclip: Šeit var apskatīt [F(x)=cos(x/2) grafiku.](https://pages.github.com/).

```
#include<stdio.h>
#include<math.h>
double mans_cosinus(double x){
 double a, S;
 int k = 0;

 //printf("y=cos(%2.f)=%2f\n",x, y);
 
 a = pow(-1,k)*pow(x, 2*k)/(1.);
 S = a;
 printf("a0=%2.2f\t\tS0=%8.2f\n",x, a, S);

 while (k<501){
   k++;
   a= a * (-1) *x*x / (4*(2*k)*(2*k-1));
   S = S + a ;
   //printf("%2.f\t%8.2f\t%8.2f\n",x, a, S);
   if (k==500 || k==499)
   {
    printf("a%d=%.3Lg S%d=%.3Lg\n",k,k,a,S);
   }
  }

  return S;
}
 void main(){
  double x ,y , yy;
  printf("Cos/2 aprēķināšana:\n");
  printf("Ievadi argumenta x vertību:");
  scanf("%lf" ,&x);

  y = cos(x/2);
  printf("cos(%.2f/2)=%.2f\n", x, y);
  yy = mans_cosinus(x);
  printf("cos(%.2f/2) caur summu: %.2f\n", x, yy);
  



  printf("\n\n");
  printf("\n ");
  printf("                   500\n ");
  printf("                   _____ \n");
  printf("                    \\\         k     2*k \n ");
  printf("                    \\\    (-1)  * x  \n ");
  printf("      cos(x/2)     = >  _________________\n ");
  printf("                    /                 2*k\n ");
  printf("                   /_____  (2*k)! * 2 \n");
  printf("                    k=0\n ");           
  printf(" \n");
  printf("                                  2 \n");
  printf("                               -x \n");
  printf("Rekurences reizinātājs:     ____________ \n");
  printf("                            4(2*k)(2*k-1) \n");


 }
 
```