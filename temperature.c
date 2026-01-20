#include <stdio.h>
#include <conio.h>
int main()
{
    float celsius, fahrenheit;
    int choice;

    printf("1. Celsius to Fahrenheit\n");
    printf("2. Fahrenheit to Celsius\n");
    printf("Enter your choice: ");
    scanf("%d", &choice);

    if(choice == 1)
    {
        printf("Enter Celsius: ");
        scanf("%f", &celsius);
        fahrenheit = (celsius * 9 / 5) + 32;
        printf("Fahrenheit = %.2f", fahrenheit);
    }
    else if(choice == 2)
    {
        printf("Enter Fahrenheit: ");
        scanf("%f", &fahrenheit);
        celsius = (fahrenheit - 32) * 5 / 9;
        printf("Celsius = %.2f", celsius);
    }
    else
    {
        printf("Invalid choice");
    }

    return 0;
}