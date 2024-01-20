#include <stdio.h>

//bubble sort
void bubbleSort(char *masivs, int n) {
    for (int i = 0; i < n - 1; i++) {
        for (int j = 0; j < n - i - 1; j++) {
            if (masivs[j] > masivs[j + 1]) {
                // maina vietām
                char change = masivs[j];
                masivs[j] = masivs[j + 1];
                masivs[j + 1] = change;
            }
        }
    }
}

int main() {
    char Input[256];

    
    printf("Ievadi simbolu rindu: ");
    scanf("%s", Input);

  
      // // masīva garums
    int length = 0;
    while (Input[length] != '\0') {
        length++;
    }


////////////////////////////////////////
    bubbleSort(Input, length);


//////////////////////////////////////////
//Lielākā mazākā vērtība
    char max = Input[length - 1];
    char min = Input[0];
/////////////////////////////////////////

 // Aprēķina vidējo vērtību
        int sum = 0;
    for (int i = 0; i < length; i++) {
        sum += Input[i];
    }

    // Calculate the vid
    float vid = (float)sum / length;
    
///////////////////////////////////////////

//Aprēķina mediānu

double mediana;
    if (length % 2 == 0) {
        // paņem vidējo rezultātu no divām vidējām vērtībām, ja masīva garums ir pāra skaitlis.
        mediana = (Input[length / 2 - 1] + Input[length / 2]) / 2;
    } else {
        // Ja garums ir nepāra skaitlis, tad paņem vidējo skaitli.
        mediana = Input[length / 2];
    }

//////////////////////////////////////////

 // Aprēķina moda ASCII vērtību
    int currentCount = 1;
    int maxCount = 1;
    double moda = Input[0];

    for (int i = 1; i < length; i++) {
        if (Input[i] == Input[i - 1]) {
            currentCount++;
        } else {
            currentCount = 1;
        }

        if (currentCount > maxCount) {
            maxCount = currentCount;
            moda = Input[i];
        }
    }

//////////////////////////////////////////////    
    

  
    
    printf("Sakārtota simbolu rinda: %s\n", Input);
    printf("Mazākā ASCII vērtība: %c\n", min);
    printf("Lielākā asci vērtība: %c\n", max);
    printf("Vidējā vērtība: %.2f\n", vid);
    printf("Mediāna (ASCII) : %lf\n", mediana);
    printf("Moda (ASCII): %lf\n", moda);
    return 0;
}
