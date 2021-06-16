#include<conio.h>
#include<stdio.h>
#include<string.h>


// 1. String Printing Program in C
void main() {
	printf("Enter the string :");
	char ch[20];
	gets(&ch, 20, stdin);
	printf("The string is : %s", ch);
}

// 2. use of gets(), puts()
void main() {
	printf("Enter the string : ");
	char ch[20];
	gets(ch);
	printf("The string is : ");
	puts(ch);
}

// 3. Find string length by using strlen()
void main() {
	printf("Enter the string : ");
	char ch[20];
	int n = 0;
	gets(ch);
	n = strlen(ch);
	printf("The string is : %s of length %d",ch,n);
}

// 4. Without string function
void main() {
	printf("Enter the string : ");
	char ch[20];
	int n = 0;
	gets(ch);
	for (int i = 0; ch[i] != '\0'; i++) {
			n++;
	}
	printf("The string is : %s of length %d", ch, n);
}

// 5. Find the Frequency of a Character
void main() {
	printf("Enter the string : ");
	char ch[20];
	int i, n[256] = { 0 };
	gets(ch);
	for (i = 0; ch[i] != '\0'; i++)
	{
		n[ch[i]]++;
	}
	for (i = 0; i < 256; i++)
	{
		if (n[i] != 0)
		{
			printf(" %c %d\n", i, n[i]);
		}
	}
	getch();
}

// 6. To count no of vowels, consonants, space, digits
void main() {
	printf("Enter the string : ");
	char ch[256];
	int vwl = 0, cnst = 0, spc = 0, dig = 0;
	gets(ch);
	for (int i = 0; ch[i] != '\0'; i++) {
		if (ch[i] == ' ') {
			spc++;
		}
		else if (ch[i] == 'a' || ch[i] == 'e' || ch[i] == 'i' || ch[i] == 'o' || ch[i] == 'u' || ch[i] == 'A' || ch[i] == 'E' || ch[i] == 'I' || ch[i] == 'O' || ch[i] == 'U') {
			vwl++;
		}
		else if ((ch[i] >= 'a' && ch[i] <= 'z') || (ch[i] >= 'A' && ch[i] <= 'Z')) {
			cnst++;
		}
		else if (ch[i] >= '0' && ch[i] <= '9') {
			dig++;
		}
	}
	printf("The Number of \n Vowels : %d\n Consonants : %d\n Space : %d\n Digits : %d", vwl, cnst, spc, dig);
	getch();
}

// 7. menu driven with string in - built functions