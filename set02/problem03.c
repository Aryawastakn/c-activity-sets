// Write a program find whether a number is a composite number
//A Composite number has more than 2 factors.

#include <stdio.h>
int input_number();
int is_composite(int n);
void output(int n, int result);

int main() 
{
    int number, result;
    number = input_number();
    result = is_composite(number);
    output(number, result);
    return 0;
}
int input_number() 
{
    
    int num;
    printf("Enter a number: ");
    scanf("%d", &num);
    return num;
}
int is_composite(int n) 
{
    int i, count = 0;
    
    for (i = 1; i <= n; i++) 
    {
        if (n % i == 0) 
        {
            count++;
        }
    }
    return (count > 2) ? 1 : 0;
}

void output(int n, int result) {
    printf("\nNumber: %d\n", n);

    if (result) 
    {
        printf("The number is a Composite number.\n");
    } 
    else 
    {
        printf("The number is not a Composite number.\n");
    }
}



