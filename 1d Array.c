#include<stdio.h>
#include<conio.h>

// 1. Enter array elements, display it
void main() {
	int a[20];
	printf("Enter the elements of the array :");
	for (int i = 0; i < 20; i++) {
		scanf_s("%d", &a[i]);
	}
	printf("\nThe array is : ");
	for (int i = 0; i < 20; i++) {
		printf(" %d", a[i]);
	}
	getch();
}

// 2  Sum of all array elements
void main() {
	int a[20], sum = 0;
	printf("Enter the elements of the array :");
	for (int i = 0; i < 20; i++) {
		scanf_s("%d", &a[i]);
		sum += a[i];
	}
	printf("\nThe sum of array ");
	for (int i = 0; i < 20; i++) {
		printf(" %d", a[i]);
	}
	printf("\nis = %d", sum);
	getch();
}

// 3. Find out total even & odd nos in an array
void main() {
	int a[20], odd = 0, even = 0, zero = 0;
	printf("Enter the elements of the array :");
	for (int i = 0; i < 20; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			zero++;
		else if (a[i] % 2 == 0)
			even++;
		else
			odd++;
	}
	printf("\nThe number of even and odd in array ");
	for (int i = 0; i < 20; i++) {
		printf(" %d", a[i]);
	}
	printf(" is :\n Odd = %d\n Even = %d", odd, even);
	getch();
}

// 4. Find out total positive, negative, zero nos in an array
void main() {
	int a[20], pos = 0, neg = 0, zero = 0;
	printf("Enter the elements of the array :");
	for (int i = 0; i < 20; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] == 0)
			zero++;
		else if (a[i] > 0)
			pos++;
		else
			neg++;
	}
	printf("\nThe number of positive, negative and zero in array ");
	for (int i = 0; i < 20; i++) {
		printf(" %d", a[i]);
	}
	printf(" is :\n Positive = %d\n Negative = %d\n Zero = %d", pos, neg, zero);
	getch();
}

// 5. Find a maximum element from an array
void main() {
	int a[20], max = 0;
	printf("Enter the elements of the array :");
	for (int i = 0; i < 20; i++) {
		scanf_s("%d", &a[i]);
		if (a[i] > max)
			max = a[i];
	}
	printf("\nThe maximum number in array ");
	for (int i = 0; i < 20; i++) {
		printf(" %d", a[i]);
	}
	printf(" is : %d", max);
	getch();
}

// 6. Addition Of 2 Matrices
void main() {
	int a1[10], a2[10], sum[10];
	printf("Enter the elements of the array 1 :");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a1[i]);
	}
	printf("Enter the elements of the array 2 :");
	for (int i = 0; i < 10; i++) {
		scanf_s("%d", &a2[i]);
	}
	printf("The sum of Array 1 and Array 2 is : ");
	for (int i = 0; i < 10; i++) { 
		sum[i] = a1[i] + a2[i];
		printf(" %d", sum[i]);
	}
}