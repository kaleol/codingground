#include <stdio.h>

main() {
    float c;
    float f;
    int minTemp, maxTemp, step;
    char string1[] = "Temperature in F";
    char string2[] = "Temperature in C";
    
    minTemp = 0;
    maxTemp = 30;
    step = 5;
    
    f = minTemp;
    
    printf("%s\t%s\n", "Temperature in F", "Temperature in C");
    
    while (f <= maxTemp) {
        printf("%.0f\t\t\t%.2f\n", f, c);
        f = f + step;
    }
}

