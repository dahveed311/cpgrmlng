#include <stdio.h>

main() {
        int c, nl, nb, nt;

        nl = 0;
        nb = 0;
        nt = 0;

        while ((c = getchar()) != EOF) {
                if (c == '\n') {
                        ++nl;
                }
                if (c == '\t') {
                        ++nt;
                }
                if (c == ' ') {
                        ++nb;
                }
        }
        printf("lines: %5d\n", nl);
        printf("tabs: %5d\n", nt);
        printf("blanks: %5d\n", nb);
}
