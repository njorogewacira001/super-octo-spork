#include <stdio.h>

int main() {
    printf("Hello, World!\n");
    return 0;
}

//Variables and Input:
#include <stdio.h>

int main() {
    int age;
    
    printf("Enter your age: ");
    scanf("%d", &age);

    printf("You entered: %d\n", age);
    
    return 0;
}

//Arithmetic Operations:
#include <stdio.h>

int main() {
    int a = 5, b = 3;
    
    printf("Sum: %d\n", a + b);
    printf("Difference: %d\n", a - b);
    printf("Product: %d\n", a * b);
    printf("Quotient: %d\n", a / b);
    
    return 0;
}

 //Conditional Statements:
#include <stdio.h>

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);
    
    if (num % 2 == 0) {
        printf("%d is even.\n", num);
    } else {
        printf("%d is odd.\n", num);
    }
    
    return 0;
}


//loops
#include <stdio.h>

int main() {
    // Print numbers from 1 to 5 using a loop
    for (int i = 1; i <= 5; ++i) {
        printf("%d ", i);
    }
    printf("\n");

    // Print numbers from 5 to 1 using a loop
    int j = 5;
    while (j >= 1) {
        printf("%d ", j);
        j--;
    }
    printf("\n");

    return 0;
}

#include <stdio.h>

// Function 
int square(int x) {
    return x * x;
}

int main() {
    int num;
    
    printf("Enter a number: ");
    scanf("%d", &num);

    int result = square(num);
    
    printf("Square of %d is %d\n", num, result);
    
    return 0;  
}




