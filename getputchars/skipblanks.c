#include <stdio.h>

main() {
        int c;
        int lastc; 
        while ((c = getchar()) != EOF) {
                if (c == ' ') {
                        lastc = c;
                        continue;
                }
                if (lastc == ' ') {
                        putchar(lastc);
                        lastc = c;
                }
                putchar(c);
        }
        //printf("c out while: %d.\n", c);

}
