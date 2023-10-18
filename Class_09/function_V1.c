#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void  geneereshana(void);

int main(void)
 { 
  printf("Funkcijas genereshana() 1.izsauksana: \n");
  geneereshana();

  printf("Funkcijas genereshana() 2.izsauksana: \n");
  geneereshana();
  return 0;
 }


void  geneereshana(void)
 {
//  char i=1 ;
  int flag= 1;
  long long int counter, counter_sum =0;
  int gadiijuma_skaitlju_generatora_grauds;
 

  gadiijuma_skaitlju_generatora_grauds = time(NULL); //laiks sekundēs
  srand( gadiijuma_skaitlju_generatora_grauds);
  printf("Laiks- %d\n ", gadiijuma_skaitlju_generatora_grauds);

 
  for(int i=0; i<10; i++)
  { 
  flag =rand();     
  counter= 0;
  while(flag)
     {
//      printf("i = %d\n", i++);
      counter++;
      flag =rand();     
     }
     // printf("i = %d\n(pēc cikla)", i++);
      printf("counter = %lld(pēc cikla)\n", counter);
      counter_sum = counter_sum +counter;
      printf("counter_sum = %lld(pēc cikla)\n", counter_sum);



  }



 }
