#include <stdio.h>

/* Function Prototypes */
void welcome_line(void);
void display_menu(void);
int get_choice(void);
int add(int a, int b);
int subtract(int a, int b);
int multiply(int a, int b);

int main (void)
{
    int choice;
    int a;
    int b;

    welcome_line();
    do
    {
        display_menu();
        choice = get_choice(); 
        
        if (choice == 1)
    {    
            printf("A: ");
            scanf("%d", &a);

            printf("B: ");
            scanf("%d", &b);
            
            add(a, b);
    }

        if (choice == 2)
        {
            printf("A: ");
            scanf("%d", &a);

            printf("B: ");
            scanf("%d", &b);
            
            subtract(a, b);
        }

        if (choice == 3)
        {
            printf("A: ");
            scanf("%d", &a);

            printf("B: ");
            scanf("%d", &b);
            
            multiply(a, b);
        }
    } while (choice != 0);

    if (choice == 0)
    {
        printf("Bye!\n");
        return (choice);
    }


    
    return (0);   
}

void welcome_line(void)
{
    printf("Welcome to the simple calculator!\n");
}

void display_menu(void)
{
    printf("Simple Calculator\n");
    printf("1) Add\n");
    printf("2) Subtract\n");
    printf("3) Multiply\n");
    printf("4) Divide\n");
    printf("0) Quit\n");
}

int get_choice(void)
{
    int choice;

    printf("Choice: ");
    scanf("%d", &choice);

    if (choice < 0 || choice > 4)
    {
        printf("Invalid choice\n");
    }


    return (choice);

}

int add(int a, int b)
{
    printf("Result: %d\n", (a + b));

    return (a + b);
}

int subtract(int a, int b)
{
    printf("Result: %d\n", (a - b));

    return (a - b);
}

int multiply(int a, int b)
{
    printf("Result: %d\n", (a * b));

    return (a * b);
}
