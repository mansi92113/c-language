#include <stdio.h>

int main() {
    int n, sum = 0, num;

    printf("Enter a positive number: ");
    scanf("%d", &n);

    if (n < 2) {
        printf("there are no even number %d.\n", n);
        return 0;
    }
    num = 2;
    do {
        if (num <= n) {
            sum += num;
        }
        num += 2;
    } while (num <= n);

    printf("all even numbers between 1 and %d is: %d\n", n, sum);

    return 0;
}
