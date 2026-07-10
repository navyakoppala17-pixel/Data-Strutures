#include <stdio.h>

int main() {
    int n, num;

    printf("Enter how many numbers: ");
    scanf("%d", &n);

    for(int i = 1; i <= n; i++) {
        scanf("%d", &num);

        if(num % 2 == 0)
            printf("%d is Even\n", num);
        else
            printf("%d is Odd\n", num);
    }

    return 0;
}
