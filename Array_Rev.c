#include<conio.h>
#include<stdio.h>

void main() {
	int a[100], size = 0, i, temp;
	printf("Enter the size of array :");
	scanf_s("%d", &size);
	printf("Enter the elements of the array :");
	for (i = 0; i < size; i++) {
		scanf_s("%d", &a[i]);
	}
	for (i = 0; i < (size / 2); i++) {
		printf("%d", (size / 2) - 1);
		temp = a[i];
		a[i] = a[size - 1 - i];
		a[size - 1 - i] = temp;
	}
	printf("\nThe reverse array is : ");
	for (i = 0; i < size; i++) {
		printf(" %d", a[i]);
	}
	getch();
}