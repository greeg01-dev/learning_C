#include <stdio.h>

int main() {
	// declare variables
	int a = 0, b = 1, c = 2;

	// if..else statement
	printf("if..else statement \n");

	if (a == 0) {
		printf("a is 0");
	} else if (a == 1) {
		printf("a is 1");
	} else {
		printf("a is neither 0 nor 1");
	}

	// line break
	printf("\n\n");

	// switch..case statement
	printf("switch..case statement \n");

	switch (b) {
		case 0:
			printf("b is 0");
			break;
		case 1:
			printf("b is 1");
			break;
		default:
			printf("b is neither 0 nor 1");
	}

	// line break
	printf("\n\n");

	// ternary operator
	printf("ternary operator \n");

	printf("c is %s", c == 0? "0": c == 1? "1": "neither 0 nor 1");

	return 0;
}
