#include<stdio.h>
#include<conio.h>
/*
// 1. Swap 2 nos
void swap(int *n1, int *n2);

void main() {
	int a, b;
	printf("Enter the 2 numbers :");
	scanf_s("%d %d", &a, &b);
	printf("Before swapping \n\ta : %d : %p \n\tb : %d : %p", a, &a, b, &b);
	swap(&a, &b);
	printf("\nAfter swapping \n\ta : %d : %p \n\tb : %d : %p", a, &a, b, &b);
}

void swap(int *n1, int *n2) {
	int temp = *n1;
	*n1 = *n2;
	*n2 = temp;
}

// 2. Add 2 nos.
int add(int n1, int n2);

void main() {
	int a, b;
	printf("Enter the 2 numbers :");
	scanf_s("%d %d", &a, &b);
	printf("The sum of %d and %d is = %d", a, b, add(a, b));
}

int add(int n1, int n2) {
	return n1 + n2;
}
*/
// 3. Return max of 3 nos
int max(int nos[]);

void main() {
	int a[3];
	printf("Enter the 3 numbers :");
	scanf_s("%d %d %d", &a[0], &a[1], &a[2]);
	printf("The maximum of %d, %d, %d is = %d", a[0], a[1], a[2], max(a));
}

int max(int nos[]) {
	int max = 0;
	for (int i = 0; i < 3; i++) {
		if (nos[i] > max)
			max = nos[i];
	}
	return max;
}
