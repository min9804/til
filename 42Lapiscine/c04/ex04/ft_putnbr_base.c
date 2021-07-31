#include <unistd.h>
void ft_putchar(char c)
{
    write(1, &c, 1);
}

int check_base(char *base)
{
    int i;
    int j;

    i = 0;
    while (base[i])
    {
        j = i + 1;
        while (base[j])
        {
            if (base[i] == base[j])
                return (0);
            j++;
        }
        if (base[i] == '+' || base[i] == '-' || base[i] == '\t'
				|| base[i] == '\n' || base[i] == '\v' || base[i] == '\f'
				|| base[i] == '\r' || base[i] == ' ')
			return (0);
        i++;
    }
    i = 0;
    while (base[i] != '\0') //위에 나온 i를 그냥 리턴해도 되지않을까?
        i++;	//컴파일 해보면 없어도 되긴하는데...
    return (i);
}

void print_base(int nbr, int len, char *base)
{   
    if (nbr < len)
    {
        ft_putchar(base[nbr % len]);
    }
    else
    {
        print_base((nbr / len), len, base);
        print_base((nbr % len), len, base);
    }
}

void ft_putnbr_base(int nbr, char *base)
{
    int len;

    len = check_base(base);
    if (len > 1)
    {
        if (nbr == -2147483648)
        {
            ft_putchar('-');
            print_base((nbr / len) * -1, len, base);
            ft_putchar(base[nbr % len * -1]);
        }            
        else if(nbr < 0)
        {
            ft_putchar('-');
            print_base(nbr * -1, len, base);
        }
        else
            print_base(nbr, len, base);
    }
}

int	main()
{
	int nbr = -2147483648;
	char *base = "01";
	
	ft_putnbr_base(nbr, base);
	return 0;
}

   
    
    
