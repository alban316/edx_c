#include <stdio.h>
#include <stdlib.h>
#include "temp.h"

int main(int argc, char **argv) {
    if (argc > 1) {
        double c = ftoc(atof(argv[1]));
        printf("%s Fahrenheit is %f Celcius\n", argv[1], c);
    }

    else {
        printf("Specify F value.\n");
    }
}
