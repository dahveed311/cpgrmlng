#include <stdio.h>

main() {

        double nc;

        for (nc = 0; getchar() != EOF; ++nc) 
                ; // c syntax requires that a for loop
                  // have a statement, which can be just a ;
        printf("%0.f\n", nc);
}
