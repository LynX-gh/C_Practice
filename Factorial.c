#include<stdio.h>
#include<conio.h>

long int factorial(int n);

void main(){
	int num;
	printf("Enter the number of factorial :");
	scanf("%d",&num);
	printf("The factorial is : %ld",factorial(num));
	getch();
}

long int factorial(int n){
	return(n<2?n:(n*factorial(--n)));
}