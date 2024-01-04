#include<stdio.h>
void main(){
    char a[100];
    printf("enter a string");
    scanf("%s",&a);
    printf("\nThe string is %s",a);
    printf("enter the string");
    gets(a);
    printf("\nThe string is\n %s",a);
    printf("\nEnter the string");
    scanf("%[^\n]s",a);
    printf("the string is\n %s ",a);
}