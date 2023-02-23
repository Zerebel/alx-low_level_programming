#include <stdio.h>

int main(void) {
    long int n = 612852475143;
    int i = 2, largest_prime_factor = 0;

    while (i <= n) {
        if (n % i == 0) {
            n /= i;
            largest_prime_factor = i;
        } else {
            i++;
        }
    }

    printf("%d\n", largest_prime_factor);

    return 0;
}

