#include <stdio.h>

int main() {
    int temperature = 0;

    printf("press the temperature: ");
    scanf("%d", &temperature);

    printf("The temperature in fahrenheit is: %.f\n",(float) temperature * 1.8f + 32);
    return 0;
}