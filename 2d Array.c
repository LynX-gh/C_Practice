#include<stdio.h>
#include<conio.h>

//1. sum of all elements
void main() {
	int a[3][3],sum=0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Enter the element %d . %d :", i+1, j+1);
			scanf_s("%d", &a[i][j]);
			sum += a[i][j];
		}
	}
	printf("The sum of all elements of matrix is : %d", sum);
	getch();
}

//2. find out max
void main() {
	int a[3][3], max = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Enter the element %d . %d :", i+1, j+1);
			scanf_s("%d", &a[i][j]);
			if (a[i][j] > max) {
				max = a[i][j];
			}
		}
	}
	printf("The max of all elements of matrix is : %d", max);
	getch();
}

//3. count total zeros
void main() {
	int a[3][3], sum = 0;
	for (int i = 0; i < 3; i++) {
		for (int j = 0; j < 3; j++) {
			printf("Enter the element %d . %d :", i+1, j+1);
			scanf_s("%d", &a[i][j]);
			if (a[i][j] == 0) {
				sum++;
			}
		}
	}
	printf("The number of total zeroes is : %d", sum);
	getch();
}
