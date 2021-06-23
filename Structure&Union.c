#include<conio.h>
#include<stdio.h>
#include<stdlib.h>


// 1. Write a program to define structure with tag state with fields state name, number of districtsand total population.Readand display the data
struct state 
{
	char name[20];
	float pop;
	int dist;
};

void main(){
	int size;
	printf("Enter the number of states you want in database : ");
	scanf_s("%d",&size);
	struct state states[20];
	for (int i = 0; i < size; i++) {
		printf("Enter data for state %d : \nName :", i + 1);
		scanf_s("%s", states[i].name, 20);
		printf("Population :");
		scanf_s("%f", &states[i].pop);
		printf("No. of Districts : ");
		scanf_s("%d", &states[i].dist);
	}
	system("cls");
	printf("\nThe data of states is : \n\n");
	for (int i = 0; i < size; i++) {
		printf("Data for state %d\tName : %s\t\tDistricts : %d\tPopulation : %.0f\n", i + 1, states[i].name, states[i].dist, states[i].pop);
	}
	system("pause");
}

// 2. Write a program to create a structure of 5 student’s roll_no and name and display the records. Use array of structure
struct student
{
	char name[20];
	int roll;
};

void main() {
	struct student students[5];
	for (int i = 0; i < 5; i++) {
		printf("Enter data for student %d : \nName :", i + 1);
		scanf_s("%s", students[i].name, 20);
		printf("Roll Number : ");
		scanf_s("%d", &students[i].roll);
	}
	system("cls");
	printf("\nThe data of students is : \n\n");

	for (int i = 0; i < 5; i++) {
		printf("Data for %d.\tName : %s\t\tRoll number : %d\n", i + 1, students[i].name, students[i].roll);
	}
	system("pause");
}

// 3. Write a program to create structure of bank with accno, holder_nameand balanceand display them for n holders whose balance is less than 5000.
struct account
{
	char name[20];
	float balance;
	int accno;
};

void printinfo(struct account);
struct account getinfo();

void main() {
	int size;
	struct account accounts[20];
	printf("Enter the number of account holders (Max 20) : ");
	scanf_s("%d", &size);
	for (int i = 0; i < size; i++) {
		accounts[i] = getinfo();
	}
	system("cls");
	printf("\nThe data of account with balance less than 5000 is : \n");
	for (int i = 0; i < size; i++) {
		if (accounts[i].balance < 5000) {
			printinfo(accounts[i]);
		}
	}
	system("pause");
}

void printinfo(struct account accounts) {
	printf("\n\tName : %s\t\tAccount number : %d\tBalance : %f\n", accounts.name, accounts.accno, accounts.balance);
}

struct account getinfo() {
	struct account temp;
	printf("Enter data for account : \nName :");
	scanf_s("%s", temp.name, 20);
	printf("Balance :");
	scanf_s("%f", &temp.balance);
	printf("Account NUmber : ");
	scanf_s("%d", &temp.accno);
	return temp;
}

// 4. Write a program to create union of student’s roll_no and name and display the records.
union student
{
	char name[20];
	int roll;
};

void main() {
	union student students[5];
	for (int i = 0; i < 5; i++) {
		printf("Enter data for student %d : \nName :", i + 1);
		scanf_s("%s", students[i].name, 20);
		printf("Roll Number : ");
		scanf_s("%d", &students[i].roll);
	}
	system("cls");
	printf("\nThe data of students is : \n\n");

	for (int i = 0; i < 5; i++) {
		printf("Data for %d.\tName : %s\t\tRoll number : %d\n", i + 1, students[i].name, students[i].roll);
	}
	system("pause");
}
