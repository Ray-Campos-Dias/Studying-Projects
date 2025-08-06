#include <stdio.h>

float add(float number1, float number2) // simple addtion function
{
    float result = number1 + number2;
    return result;
}

float subtract(float number1, float number2) // simple subtraction function
{
    float result = number1 - number2;
    return result;
}

float multiply(float number1, float number2) // simple multiplication function
{
    float result = number1 * number2;
    return result;
}

float divide(float number1, float number2) // simple division function
{
    float result = number1 / number2;
    return result;
}

float power(float number1, float number2) // simple power function, can't handle non-integers exponents
{
    float result = 1;
    int isnegative = 0;
    if(number2 == 0) // handle exponent equal to 0
    {
        return result = 1;
    }
    if(number2 < 0) // handle negative integers exponents
    {
        isnegative = 1;
        number1 = -number1;
    }
    while(number2 > 0)
    {
        result *= number1;
        number2--;
    }
    if(isnegative == 1) // handle negative integers exponents
    {
        result = 1 / result;
    }
    return result;
}

typedef struct
{
    float number1[100];
    char oprt[100];
    float number2[100];
    float result[100];
}opr_his;
opr_his historyd;
int i = 0;
void history(int operationchoice, float number1, float number2, float result)
{

    switch(operationchoice)
    {
        case 1:
        {
            historyd.number1[i] = number1;
            historyd.oprt[i] = '+';
            historyd.number2[i] = number2;
            historyd.result[i] = result;
            i++;
            break;
        }
        case 2:
        {
            historyd.number1[i] = number1;
            historyd.oprt[i] = '-';
            historyd.number2[i] = number2;
            historyd.result[i] = result;
            i++;
            break;
        }
        case 3:
        {
            historyd.number1[i] = number1;
            historyd.oprt[i] = '*';
            historyd.number2[i] = number2;
            historyd.result[i] = result;
            i++;
            break;
        }
        case 4:
        {
            historyd.number1[i] = number1;
            historyd.oprt[i] = '/';
            historyd.number2[i] = number2;
            historyd.result[i] = result;
            i++;
            break;
        }
        case 5:
        {
            historyd.number1[i] = number1;
            historyd.oprt[i] = '^';
            historyd.number2[i] = number2;
            historyd.result[i] = result;
            i++;
            break;
        }
    }
}

void clear_buffer() // function to clear unwanted keyboar buffer
{
    int ch;
    while ((ch = getchar()) != '\n' && ch != EOF);
}

void print_menu() // function to print the main menu
{
    printf("+--------------------------------+\n");
    printf("| Choose one operation:          |\n");
    printf("+--------------------------------+\n");
    printf("| 1 - Addition                   |\n");
    printf("| 2 - Subtraction                |\n");
    printf("| 3 - Multiplication             |\n");
    printf("| 4 - Division                   |\n");
    printf("| 5 - Power                      |\n");
    printf("| 6 - History                    |\n");
    printf("| 7 - Exit                       |\n");
    printf("+--------------------------------+\n");
}

int get_menu_option(const char *prompt, int min, int max) // function to handle the menu selection
{
    int choice;
    int input_status;

    while (1)
    {
        printf("%s", prompt);
        input_status = scanf("%d", &choice);

        if(input_status == 1)
        {
            clear_buffer();

            if(choice >=min && choice <= max)
            {
                return choice;
            }
            else
            {
                printf("ERROR!!! Select an option between %d to %d!\n", min, max);
            }
        }
        else
        {
            printf("ERROR!!! Please enter a valid number!\n");
            clear_buffer();
        }
    }
}

int get_int(const char *prompt) // function to handle integers inputs
{
    int number;
    int input_status;

    while(1)
    {
        printf("%s", prompt);
        input_status = scanf("%d", &number);

        if(input_status == 1)
        {
            clear_buffer();
            return number;
        }
        else
        {
            printf("ERROR!!! Please enter a valid number!\n");
            clear_buffer();
        }
    }
}

float get_float(const char *prompt) // function to handle float values filtering unwanted input
{
    float number;
    float input_stts;

    while(1)
    {
        printf("%s", prompt);
        input_stts = scanf("%f", &number);

        if(input_stts == 1)
        {
            clear_buffer();
            return number;
        }
        else
        {
            printf("ERROR!!! Please enter a valid number!\n");
            clear_buffer();
        }
    }
}

int main() // main function of the calculator with a loop to maintain the things going until the user says otherwise

{
    int operationchoice;
    do
    {
        print_menu();
        operationchoice = get_menu_option("Type an option: ", 1, 7);

        switch(operationchoice)
        {
            case 1: // addition case
            {
                printf("\nStarting Addition with two numbers...\n");
                float number1 = get_float("Type the first number: ");
                float number2 = get_float("Type the second number: ");
                float result = add(number1, number2);
                printf("The result is %.2f\n", result);
                history(operationchoice, number1, number2, result);
                break;
            }

            case 2: // subtraction case
            {
                printf("\nStarting Subtraction with two numbers...\n");
                float number1 = get_float("Type the minuend: ");
                float number2 = get_float("Type the subtrahend: ");
                float result = subtract(number1, number2);
                printf("The result is %.2f\n", result);
                history(operationchoice, number1, number2, result);
                break;
            }

            case 3: // multiplication case
            {
                printf("\nStarting Multiplication with two numbers...\n");
                float number1 = get_float("Type the first number: ");
                float number2 = get_float("Type the second number: ");
                float result = multiply(number1, number2);
                printf("The result is %.2f\n", result);
                history(operationchoice, number1, number2, result);
                break;
            }

            case 4: // division case
            {
                printf("\nStarting Division with two numbers...\n");
                float number1 = get_float("Type the dividend: ");
                float number2 = get_float("Type the divisor: ");
                while (number2 == 0)
                {
                    printf("ERROR!!! The divisor can not be zero\n");
                    number2 = get_float("Type the divisor: ");
                }
                float result = divide(number1, number2);
                printf("The result is %.2f\n", result);
                history(operationchoice, number1, number2, result);
                break;
            }

            case 5: // power case
            {
                printf("\nStarting Power Operation with two numbers...\n");
                float number1 = get_float("Type the base: ");
                float number2 = get_float("Type the exponent: ");
                float result = power(number1, number2);
                printf("The result is %.2f\n", result);
                history(operationchoice, number1, number2, result);
                break;
            }
            case 6:
            {
                printf("History: ");
                for(int j = 0; j < 100; j++)
                {
                    if(historyd.number1[j] != 0 && historyd.oprt[j] != 0 && historyd.number2[j] != 0)
                    {
                        printf("%.2f %c %.2f = %.2f | ", historyd.number1[j], historyd.oprt[j], historyd.number2[j], historyd.result[j]);
                    }
                }
                printf("\n");
                break;
            }
            case 7: // exit case
            {
                printf("Exiting calculator...\n");
                break;
            }
            default: // debug
                printf("ERROR!!! Unknow error detected...\n");
        }
    }
    while(operationchoice <= 6 && operationchoice >= 1);
    return 0;
}
