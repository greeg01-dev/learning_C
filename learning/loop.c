#include <stdio.h>

int main() {
	// for loop
	printf("for loop \n");

	// for (initial expression; conditional expression; incremental expression)
	for (int i = 1; i <= 5; i++) {
		printf("i is %d \n", i);
	}

	// line break
	printf("\n");

	// while loop
	printf("while loop \n");

	int j = 1;

	// while (conditional expression)
	while (j <= 5) {
		printf("j is %d \n", j++);
	}

	// line break
	printf("\n");

	// do-while loop
	printf("do-while loop \n");

	int k = 1;

	do {
		printf("k is %d \n", k++);
	} while (k > 1 && k <= 5);

	// line break
	printf("\n");

	// break
	printf("break (while) \n");

	int l = 0;

	while (1) {
		printf("l is %d \n", l++);
		if (l > 5) { break; }
	}
	
	// line break
	printf("\n");

	// continue
	printf("continue (for) \n");

	printf("-----odd numbers (0~20)----- \n");

	for (int i = 0; i < 20; i++) {
		if (i % 2 == 0) { continue; }
		printf("%d \n", i);
	}

	return 0;
}
