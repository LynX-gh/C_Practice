#include<conio.h>
#include<stdio.h>

// 1. * ** ***
void main() {
	int num = 0;
	printf("How many lines do you want ?\n");
	scanf_s("%d", &num);
	for (int i = 0; i < num+1; i++) {
		printf("\n");
		for (int j = 0; j < i; j++) {
			printf("*\t");
		}
	}
}

// 2. 1 12 123
void main() {
	int num = 0;
	printf("How many lines do you want ?\n");
	scanf_s("%d", &num);
	for (int i = 0; i < num + 1; i++) {
		printf("\n");
		for (int j = 0; j < i; j++) {
			printf("%d\t",j+1);
		}
	}
}

// 3. *** ** *
void main() {
	int num = 0;
	printf("How many lines do you want ?\n");
	scanf_s("%d", &num);
	for (int i = num; i > 0; i--) {
		printf("\n");
		for (int j = i; j > 0; j--) {
			printf("*\t");
		}
	}
}

// 4. 321 21 1
void main() {
	int num = 0;
	printf("How many lines do you want ?\n");
	scanf_s("%d", &num);
	for (int i = num; i > 0; i--) {
		printf("\n");
		for (int j = i; j > 0; j--) {
			printf("%d\t",j);
		}
	}
}

// 5. 1 13 135
void main() {
	int num = 0;
	printf("How many lines do you want ?\n");
	scanf_s("%d", &num);
	for (int i = 0; i < num + 1; i++) {
		printf("\n");
		for (int j = 0; j < i; j++) {
			printf("%d\t", (1+2*(j)));
		}
	}
}