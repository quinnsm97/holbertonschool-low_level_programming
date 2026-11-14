#include <stdio.h>

/* Function Prototypes */
void welcome_line(void);
void display_menu(void);
void get_choice(void);

int main (void)
{
    welcome_line();
    display_menu();
    get_choice();

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

void get_choice(void)
{
    int choice;

    printf("Choice: ");
    scanf("%d", &choice);

    if (choice == 0)
    {
        printf("Bye!");
        return;
    }

}
