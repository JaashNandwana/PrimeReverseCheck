#include <stdio.h>

// Function to check if a number is prime
int isPrime(int num) {
    if (num <= 1) return 0; // Numbers less than or equal to 1 are not prime

    for (int i = 2; i * i <= num; i++) {
        if (num % i == 0) return 0; // Not a prime number
    }
    return 1; // Prime number
}

// Function to reverse a number
int reverseNumber(int num) {
    int reversed = 0;

    while (num > 0) {
        reversed = reversed * 10 + num % 10;
        num /= 10;
    }

    return reversed;
}

int main() {
    int number;

    // Input number from the user
    printf("Enter a number: ");
    scanf("%d", &number);

    // Check if the number is prime
    if (isPrime(number)) {
        printf("%d is a prime number.\n", number);

        // Reverse the number
        int reversed = reverseNumber(number);
        printf("The reversed number is: %d\n", reversed);
    } else {
        printf("%d is not a prime number.\n", number);
    }

    return 0;
}
