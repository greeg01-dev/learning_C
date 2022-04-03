#include <stdio.h>

int main() {
	int a = 1;

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

	switch (a) {
		case 0:
			printf("a is 0");
			break;
		case 1:
			printf("a is 1");
			break;
		default:
			printf("a is neither 0 nor 1");
	}
	
	return 0;
}
