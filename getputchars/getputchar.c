#include <stdio.h>

main() {
        int c;

        while ((c = getchar()) != EOF) {
                //printf("c in while: %d.\n", c);
                putchar(c);
        }
        //printf("c out while: %d.\n", c);

}
