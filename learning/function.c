#include <stdio.h>

// void type is the type that doesn't have the return value
void hello_world() {
	printf("Hello, World! \n");
}

// type of return value is int
int plus(int a, int b) {
	return a + b; // the return value
}

// recursion function
int fibonacci(int num) {
	if (num < 1) return 0;
	if (num <= 2) return 1;

	return fibonacci(num - 2) + fibonacci(num - 1);
}

int main() {
	hello_world();
	printf("2 + 3 == %d \n", plus(2, 3));
	printf("the 10th value of fibonacci sequence: %d \n", fibonacci(10));

	return 0;
}
