#include <stdio.h>
int ft_atoi(char *str)
{
    int num;
    int sing;

    num = 0;
    sing = 1;
    while (*str == ' '  
            || *str == 't'
            || *str == 'n'
            || *str == 'r'
            || *str == 'f'
            || *str == 'v')
            str++;
    while (*str == '-' || *str == '+')
    {
        if (*str == '-')
            sing *= -1;
        str++;
    }
    while ('0' <= *str && *str <= '9')
    {
        num *= 10;
        num += (*str) - '0';
        str++;
    }
    num *= sing;

    return (num);
}
int main()
{   
    char arr[] = "  ---1234";
    printf("%d \n", ft_atoi(arr));
}
