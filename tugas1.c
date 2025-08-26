#include <stdio.h>

int main() {
    int a, b;
    float result;

    printf("Enter two integers: ");
    scanf("%d %d", &a, &b);  

    if (b == 0) {  // pengecekan pembagi nol
        printf("Error: Division by zero is not allowed.\n");
        return 1;
    }

    result = (float)a / b; 
    printf("The division of %d and %d is %.2f\n", a, b, result);

    return 0;
}
