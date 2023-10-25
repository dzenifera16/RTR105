#include "foo.h"
#include <stdio.h>

int main(void)
{   //char *name_main= "bar";// šādi nodefinēto rindas saturu mainīt vairs nevarēs
    char name_main[] = "bar";
    printf("name_main atrašanās vieta atmiņā: %p\n", name_main);
    printf("Vērtība pirms foo izpildīšanas: %s\n", name_main);

    int id_main = 42;
    printf("name_main atrašanās vieta atmiņā: %p\n", &id_main);
    printf("Vērtība pirms foo izpildīšanas: %d\n\n",id_main);


   // foo(42, "bar");
    foo(id_main, name_main);


    printf("\nname_main atrašanās vieta atmiņā: %p\n", name_main);
    printf("Vērtība pirms foo izpildīšanas: %s\n", name_main);

    printf("id_main atrašanās vieta atmiņā: %p\n", &id_main);
    printf("Vērtība pirms foo izpildīšanas: %d\n\n",id_main);


    return 0;
}
