#include<stdio.h>
#include<stdlib.h>

// 1. WAP that demonstrates the use of address of(&) and pointer(*) operator.
void main() {
	int a = 20;
	int *b = &a;
	printf("\nLocation of a - %p\tValue of a - %d\nLocation of pointer - %p\tValue of pointer - %p\tValue of pointer location - %d", &a, a, &b, b, *b);
	system("pause");
}

// 2. WAP to read and display values of an integer array. Allocate space dynamically for the array.
void main()
{
    int* ptr;
    int n, i, a; 
    printf("Enter number of elements: ");
    scanf_s("%d", &n);
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));
    // Check if the memory has been successfully allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            printf("\nEnter the element %d : ", i+1);
            scanf_s("%d", &a);
            ptr[i] = a;
        }
        // Print the elements of the array
        printf("The elements of the array are: ");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i]);
        }
    }
    system("pause");
}

// 3. WAP to display the content of 1 - D array using pointer.
void main() {
    int arr[7] = { 2, 3, 4, 5, 6, 7, 8 };
    int* ptr = arr;
    printf("\nThe array using pointer is : ");
    for (int i = 0; i < 7; i++) {
        printf("%d, ", ptr[i]);
    }
    system("pause");
}

// 4. WAF which accepts a character array as argument from the user.The function should convert all the lowercase characters into uppercase case
char* all_low_upp(char arr[], int size) {
    for (int i = 0; i < size; i++) {
        if (islower(arr[i])) {
            strupr(arr[i]);
        }
    }
    return arr;
}

// 5. WAF using pointer parameter that calculate maximum element from given array of integer number.
int maxi(int* arr, int size) {
    int max = 0;
    for (int i = 0; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max;
}

// 6. WAP that demonstrates call by value and call by reference concept in function argument. 
void change_val(int num) {
    printf("Before adding value x inside function num=%d \n", num);
    num = num + 100;
    printf("After adding value x inside function num=%d \n", num);
}

void change_ref(int* num) {
    printf("Before adding value y inside function num=%d \n", *num);
    (*num) += 100;
    printf("After adding value y inside function num=%d \n", *num);
}

void main() {
    int x = 100;
    int y = 100;
    printf("Before function call x=%d\ty=%d\n", x, y);
    //passing value in function
    change_val(x);
    change_ref(&y);
    printf("After function call x=%d\ty=%d\n", x, y);
    system("pause");
}