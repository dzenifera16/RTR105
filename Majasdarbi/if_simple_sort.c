#include <stdio.h>
int main(){
   int num1, num2, num3;
   char seciba;

   printf("Izvēlies kādā secībā kārtosi: augošā vai dilstošā?(ieraksti a vai d): \n");
   scanf("%c",&seciba);
   if (seciba == 'a'){
           printf("Ievadi tris skaitlus ar atstarpi:\n");
           scanf("%d %d %d",&num1,&num2,&num3);
           int vid, max, min;


           if (num1>num2) {
              vid=num1;
              min=num2;
           } else {
              vid=num2;
              min=num1;
           }
           if (vid>num3) {
              max=vid;
              if(min>num3){
                 vid=min;
                 min=num3;
           }else {
                  vid=num3;
                     }
           }else max=num3;

   printf("Augossa seciba %d %d %d\n", min, vid, max);
   }
   else if (seciba == 'd'){
           printf("Ievadi tris skaitlus ar atstarpi:\n");
           scanf("%d %d %d",&num1,&num2,&num3);
           int vid, max, min;


           if (num1>num2) {
              vid=num1;
              min=num2;
           } else {
              vid=num2;
              min=num1;
           }
           if (vid>num3) {
              max=vid;
              if(min>num3){
                 vid=min;
                 min=num3;
           }else {
                  vid=num3;

              }
           }else max=num3;
 
  printf("Dilstosa seciba %d %d %d\n", max, vid, min);
   }
  else {
        printf("Tu ievadiji kautko nepareizi");
}

  return 0;
   }
