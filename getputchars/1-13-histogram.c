#include <stdio.h>

#define IN 1 // inside a word
#define OUT 0 // outside a word
#define MAXDIGITS 20 // assume words have 20 or fewer characters

main() {
        int i, c, nl, nw, nc, state;
        int nchars[MAXDIGITS];
        int counter; 

        state = OUT;
        nl = nw = nc = 0;
        counter = 0;

        // initialize array for counting number of words with i chars
        for (i = 0; i < MAXDIGITS; i++) {
                nchars[i] = 0;
        }

        while ((c = getchar()) != EOF) {
                ++nc;
                if (c == '\n') {
                        ++nl;
                }
                if (c == ' ' || c == '\n' || c == '\t') {
                        state = OUT;
                        nchars[counter]++;
                        counter = 0;
                } else if (state == OUT) {
                        state = IN;
                        ++nw;
                }
                if (state == IN) {
                        counter++;
                }


        }
        printf("output\n");
        for (i = 0; i < MAXDIGITS; i++) {
                printf("%d words: ", i);
                for (int z = 0; z < nchars[i]; z++) {
                        printf("|");
                }
                printf("\n");
        }
        printf("%d %d %d\n", nl, nw, nc);
}
