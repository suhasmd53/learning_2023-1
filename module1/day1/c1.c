#include <stdio.h>

int find_biggest_if_else(int num1, int num2) {
    if (num1 > num2) {
        return num1;
    } else {
        return num2;
    }
}

int find_biggest_ternary(int num1, int num2) {
    return (num1 > num2) ? num1 : num2;
}

int main() {
    int num1, num2;
    
    printf("Enter the first number : ");
    scanf("%d", &num1);
    
    printf("Enter the second number: ");
    scanf("%d", &num2);
    
    int biggest_if_else = find_biggest_if_else(num1, num2);
    int biggest_ternary = find_biggest_ternary(num1, num2);
    
    printf("Using if-else: The biggest number is %d\n", biggest_if_else);
    printf("Using ternary operator: The biggest number is %d\n", biggest_ternary);
    
    return 0;
}

