#include <stdio.h>
int ft_atoi(char *str)
{
    int num;

    num = 0;
    while (*str)
    {
        num = num * 10;
        num += (str - '0');
        str++;
    }
}
int main()
{   
    char arr[] = "12";
    printf("%d \n", ft_atoi(arr));
}
