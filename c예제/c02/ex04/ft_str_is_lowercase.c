#include <stdio.h>
int ft_str_in_number(char *str)
{
        int i;
        char c;

        i = 0;
        while (str[i])
        {
                c = str[i];
                if(c < 'a' || c > 'z')
                        return (0);
                i++;
        }
        return (1);
}
int main()
{
        char arr[] = "hello";
        printf("%d", ft_str_in_number(arr));
        return 0;
}

