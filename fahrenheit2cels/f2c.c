#include <stdio.h>

main() {
        float fahr;
        float celsius;
        int lower;
        int upper;
        int step;

        lower = 0;
        upper = 300;
        step = 20;

        fahr = lower;
        /*
        char fs = [];
        char cs = [];
        fs = "fahernheit";
        cs = "celsius";
        
        printf("%3s, %6s", fs, cs);
        */
        printf("fahr\tcels\n");

        while (fahr <= upper) {
                celsius = (fahr-32.0) * (5.0/9.0);
                printf("%3.0f %6.1f\n", fahr, celsius);
                fahr = fahr + step;
        }

        lower = -20;
        upper = 120;
        step = 20;

        celsius = lower;
        
        printf("cels\tfahr\n");

        while (celsius <= upper) {
                fahr = (celsius) * (9.0/5.0) + 32.0;
                printf("%3.0f %6.1f\n", celsius, fahr);
                celsius = celsius + step;
        }

}
