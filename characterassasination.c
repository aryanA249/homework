#include <stdio.h>

int main() {
    int num;

    
    printf("Enter an integer: ");
    scanf("%d", &num);

    
     (num & 1)? 
        printf("%d is an odd number.\n", num):
    
        printf("%d is an even number.\n", num);
    

    return 0;
}
