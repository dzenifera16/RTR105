/* scanf example */
#include <stdio.h>

int main ()
{
  char str [80];
  int i;

  printf ("Ievadi vārdu : ");
  scanf ("%79s",str);  
  printf ("Enter your age: ");
  scanf ("%d",&i);
  printf("Ievadi dzimšanas datumu:");
  scanf("%d",&i);
  printf ("Mr. %s ,( %d) \n",str,i);
  printf ("Enter a hexadecimal number: ");
  scanf ("%x",&i);
  printf ("You have entered %#x (%d) \n",i,i);
  
  return 0;
}
