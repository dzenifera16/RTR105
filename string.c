#include <stdio.h>
#include <string.h>
int main()
{
    char c[]= "abcd" ;
    printf (" rinda garums baitos %ld\n", sizeof(c));
    printf (" rinda garums elementos %ld\n\n", sizeof(c)/sizeof(char));
    printf (" rinda pirms izmaiņas %lu\n", strlen(c));
    printf("rinda pirms izmaiņām: %s\n", c);
    
//    strcpy(c, "efghig");
    strncpy(c, "efghig", strlen(c));
    printf (" rinda pirms izmaiņas %lu\n", strlen(c));
    printf("rinda pirms izmaiņām: %s\n", c);


    char cc[50] = "abcd";
    printf (" rinda garums baitos %ld\n", sizeof(cc));
    printf (" rinda garums baitos %ld\n\n", sizeof(cc)/sizeof(char));
    printf (" rinda pirms izmaiņas %lu\n", strlen(cc));
    printf("rinda pirms izmaiņām: %s\n\n", cc);
	


    char text[100];  
    int i,words=0, shortw=0;
 
    printf("Enter a sentence : ");
    fgets(text,sizeof(text), stdin);
     
    for(i=0;text[i];i++)  
    {
    	if(text[i]==32)
    	 words++;

 	}
 	if(i>0)
 	 words++;
 	 


 	
     
    printf("vārdi teikuma %ld\n",words);
    printf("Vārdi, kri mazāki par 5 vienībam %ld\n",sizeof(words[0]));
    
   

    return 0;
}
