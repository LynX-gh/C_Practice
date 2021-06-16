#include<stdio.h>
#include<conio.h>
#include<stdlib.h>
#include<string.h>


//Practical 3

//1. Max b/w 2
void main() {
	int n1, n2;
	printf("Enter 2 numbers :");
	scanf_s("%d%d", &n1, &n2);
	if (n1 > n2) {
		printf("%d is greater than %d", n1, n2);
	}
	else {
		printf("%d is greater than %d", n2, n1);
	}
	getch();
}

//2.Positive negative
void main() {
	int no;
	printf("Enter the number :");
	scanf_s("%d", &no);
	if (no > 0) {
		printf("%d is positive", no);
	}
	else if (no == 0) {
		printf("%d is 0", no);
	}
	else {
		printf("%d is negative", no);
	}
	getch();
}

//3.Even or Odd
void main() {
	int no;
	printf("Enter the number :");
	scanf_s("%d", &no);
	if (no % 2 == 0) {
		printf("%d is even", no);
	}
	else {
		printf("%d is odd", no);
	}
	getch();
}

//4.Leap Year
void main() {
	int no;
	printf("Enter the year to check :");
	scanf_s("%d", &no);
	if (no % 100 == 0) {
		if (no % 400 == 0) {
			printf("%d is a Leap Year", no);
		}
		else {
			printf("%d is not a Leap Year", no);
		}
	}
	else if (no % 4 == 0){
		printf("%d is a Leap Year", no);
	}
	else {
		printf("%d is not a Leap Year", no);

	}
	getch();
}

//5.Vowel
void main() {
	char ch;
	printf("Enter the alphabet you want to check :");
	scanf_s("%c", &ch);
	if (ch == 'A' || ch == 'E' || ch == 'I' || ch == 'O' || ch == 'U' || ch == 'a' || ch == 'e' || ch == 'i' || ch == 'o' || ch == 'u') {
		printf("The letter %c is a VOWEL", ch);
	}
	else {
		printf("The letter %c is a CONSONANT", &ch);
	}
	getch();
}

//6.Week day
void main() {
	int n1;
	printf("Enter the day number :");
	scanf_s("%d", &n1);
	switch (n1) {
	case 1: printf("The day %d is Monday", n1);
		break;
	case 2: printf("The day %d is Tuesday", n1);
		break;
	case 3: printf("The day %d is Wednesday", n1);
		break;
	case 4: printf("The day %d is Thursday", n1);
		break;
	case 5: printf("The day %d is Friday", n1);
		break;
	case 6: printf("The day %d is Saturay", n1);
		break;
	case 7: printf("The day %d is Sunday", n1);
		break;
	default: printf("Please enter a valid number between 1 - 7");
		break;
	}
	getch();
}
