#define _CRT_SECURE_NO_WARNINGS
#include<stdio.h>

void primeno(int x, int y);
int checkPrime(int n);

int main() {
	int a = 1, ch;
	do {
		int n1, n2;
		printf("\nSelect Your Choice :\n1.Find Prime Numbers\n2.Output Number as sum of Prime \n4.Exit");
		scanf_s("%d", &ch);
		switch (ch) {
			case 1:	printf("\nEnter the 2 Numbers :");
				scanf_s("%d", &n1);
				scanf_s("%d", &n2);
				primeno(n1, n2);
				break;
			case 2: printf("Enter a positive integer: ");
				int n, i, flag = 0;
				scanf_s("%d", &n);
				for (i = 2; i <= n / 2; ++i) {
					if (checkPrime(i) == 1) {
						if (checkPrime(n - i) == 1) {
							printf("%d = %d + %d\n", n, i, n - i);
							flag = 1;
						}
					}
				}
				if (flag == 0) { printf("%d cannot be expressed as the sum of two prime numbers.", n); }
				break;
			case 3: 
			case 4: printf("Maa Chuda");
				a = 0;
				break;
			default: printf("Wrong Choice Entered");
		}
	} while (a > 0);
	return 0;
}

void primeno(int x, int y){
	printf("\nThe prime numbers between %d and %d are : ", x, y);
	for (int i = x; i < y; i++) {
		int ispr = 0;
		for (int j = 2; j < i / 2; j++) {
			if (i % j == 0) {
				ispr++;
				break;
			}
		}
		if (ispr == 0) {
			printf("\t%d", i);
		}
	}
}

int checkPrime(int n) {
	int i, isPrime = 1;
	for (i = 2; i <= n / 2; ++i) {
		if (n % i == 0) {
			isPrime = 0;
			break;
		}
	}
	return isPrime;
}
