#include <stdio.h>

int main() {
	// make constant variables
	const char name[] = "Gawr Gura";
	const int age = 9485;
	const unsigned int birth[2] = { 6, 20 };
	const float height = 141.0;
	const char comment = 'a';

	//age = 9000; // error because the variable is constant

	// print the values of variable
	printf("name: %s \n"
		"age: %d \n"
		"birth: %u/%u \n"
		"height: %.1f \n"
		"comment: %c",
		name, age, birth[0], birth[1], height, comment);

	return 0;
}
