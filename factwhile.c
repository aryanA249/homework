#include <stdio.h>

int main() {
    int n;
    int factorial;

    printf("Enter a number: ");
    scanf("%d", &n);

    
        while (n > 0) {
            factorial *= n;
            n--;
        }

        printf("Factorial is: %d\n", factorial);
    

    return 0;
}
