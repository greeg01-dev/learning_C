#include <stdio.h>

int main() {
    printf("%%d: %d, %%i: %i \n", -10, -20); // %d & %i = print int value
    printf("%%u: %u \n", 10); // %u = print unsigned int value
    int n = 10;
    printf("%%p: %p \n", &n); // %p = print pointer value
    printf("%%c: %c \n", 'a'); // %c(%C) = print char value
    printf("%%s: %s \n", "Hello, World!"); // %s = print string value
    printf("%%f: %f, %%e: %e, %%g: %g / %g", 0.1, 0.1, 0.1, 0.00001); 
    // %f = print float value without exponential notation
    // %e = print float value with exponentail notation
    // %g = print float value as %f or %e

    return 0;
}