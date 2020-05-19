#include <stdio.h>

/* print Celsius-Fahrenheit table */

main()
{
    float cels;
    printf("  C      F\n");
        
    for (cels=0; cels<=100; cels = cels + 10)
        printf("%3.0f %6.0f\n", cels, (cels * (9.0 / 5.0) + 32));
}
