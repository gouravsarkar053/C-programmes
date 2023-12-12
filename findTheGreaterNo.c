#include<stdio.h>

int findMax(int n) {
    if (n <= 0) {
        printf("Invalid number of inputs.\n");
        return -1;
    }

    int num, max;
    printf("Enter the first number: ");
    scanf("%d", &max);

    for (int i = 1; i < n; ++i) {
        printf("Enter the next number: ");
        scanf("%d", &num);

        if (num > max) {
            max = num;
        }
    }

    return max;
}

int main() {
    int n;

    printf("Enter the number of values you want to compare: ");
    scanf("%d", &n);

    int result = findMax(n);

    if (result != -1) {
        printf("The greater number is: %d\n", result);
    }

    return 0;
}
