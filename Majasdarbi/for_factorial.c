#include <stdio.h>
#include <string.h>


long long calculate_factorial(long long num) {
    long long factorial = 1;

    for (long long i = num; i > 0; i--)
    {
        factorial *= num;
        num--;
    }

    return factorial;
}

int main() {
    long long num, result;
    char data_type[20];

 
    printf("Ievadi skaitli: ");
    scanf("%lld", &num);

    printf("Izvēlies kādu datu tipu izmantojot, vēlies attēlot skaitļa faktorialu (char-c, int-i, long long-l): ");
    scanf("%s", data_type);

 
    if (strcmp(data_type, "c") == 0) {
        // strcamp salīdzina divas string vērtības, ja iznākums ir 0, tad abas vērtības ir vienādas.
        if (num < 0 || num > 127) {
            printf("Ar izvēlēto datu tipu šim skaitlim faktoriālu aprēķināt nav iespejams.\n");
            return 0;
        }
    } else if (strcmp(data_type, "i") == 0) {
 
        if (num < 0 || num > 2147483647) {
            printf("Ar izvēlēto datu tipu šim skaitlim faktoriālu aprēķināt nav iespejams.\n");
            return 0;
        }
    } else if (strcmp(data_type, "l") == 0) {
 
        if (num < 0) {
            printf("Ar izvēlēto datu tipu šim skaitlim faktoriālu aprēķināt nav iespejams.\n");
            return 0;
        }
    } else {
        printf("Nepareizi ievadīts datu tips.\n");
        return 0;
    }

   
    result = calculate_factorial(num);

    if (result == -1) {
        printf("Faktoriāls skaitlim, ko ievadīji nevar būt pareizi aprēķināts ar tevis izvēlēto datu tipu.\n");
    } else {
        printf("skaitļa faktoriāls, ko ievadīji ir  %lld\n", result);
    }

    return 0;
}
