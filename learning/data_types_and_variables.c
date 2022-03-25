#include <stdio.h>

int main() {
    char *name = "Gawl Gura"; // make a string variable
    int age = 9485; // make a integer variable
    unsigned int birth[2] = { 6, 20 }; // make an unsigned integer array (maybe learn next)
    float height = 141.0; // make an float variable
    char comment = 'a'; // make a character variable

    name = "Gawr Gura"; // change variable

    // print the values of variables
    printf("name: %s \n", name);
    printf("age: %d \n", age);
    printf("birth: %u/%u \n", birth[0], birth[1]);
    printf("height: %.1f \n", height);
    printf("comment: %c", comment);
}