int	ft_count_if(char **tab, int length, int(*f)(char*))
{
	int cnt;

	cnt = 0;
	while (length--)
		if (f(tab[length] != 0)
			++cnt;
	return (cnt);
}
