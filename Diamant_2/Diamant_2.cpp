

#include <stdio.h>

int main()
{
	for (int j = 1; j <= 9; j++) {
		for (int i = 1; i <= j; i++) {
			printf("%3d", i);
		}
		printf("\n");
	}
	for (int j = 8; j >= 2; j--) {
		for (int i = 1; i <= j; i++) {
			printf("%3d", i);
		}
		printf("\n");
	}
}
