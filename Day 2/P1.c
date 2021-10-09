#include <stdio.h>
int sum_of_digits(int n) {
    int digit, temp, sum = 0;
    temp = n;

    while(temp > 0)
    {
        digit = temp % 10;
        sum = sum + digit;
        temp = temp / 10;
    }
    return sum;
}

int main() {
    int n;
    printf("Enter number: ");
    scanf("%d", &n);

    printf("Sum of digits = %d\n",sum_of_digits(n));
    return 0;
}
