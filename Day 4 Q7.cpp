//Q7: Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main(){
	  int a, b;

    // Input two numbers
    scanf("%d %d", &a, &b);

    // Swap without using a third variable (using arithmetic)
    a = a + b;
    b = a - b;
    a = a - b;

    // Display result
    printf("After swap: %d %d\n", a, b);

    return 0;
}



