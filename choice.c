#include <stdio.h>
int main()
{
    int choice;
    float radius,sides,length,width;
    float area,perimeter;
    printf("Select your choice from the following");
    printf("\n1.Circle");
    printf("\n2.Sqaure");
    printf("\n3.Rectangle");
    if(choice==1)
    {prinintf("Enter the radius of Circle: ");
        scanf("%f",&radius);
        area=3.14*radius*radius;
        perimeter=2*3.14*radius;
    }
    else if(choice==2)
    {
        printf("Enter the Sides of Square: ");
        scanf("%f",&sides);
        area=sides*sides;
        perimeter=4*sides;
    }
    else if(choice==3)
    {
        printf("Enter the length and width of Rectangle: \n");
        scanf("%f",&length);
        scanf("%f",&width);
        area=length*width;
        perimeter=2*(length+width);
    }
    else
    {
        printf("Invalid choice");
    }

    printf("Area: %.2f",area);
    printf("\nPerimeter: %.2f",perimeter);

    return 0;
    
}