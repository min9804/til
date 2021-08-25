size_t	ft_strcspn(const char *s, const char *reject)
{
	int i;

	while (*reject)
	{
		i = 0;
		while (s[i])
		{
			if (s[i] == *reject)
				return (i);
			++i;
		}
		++reject;
	}
	return (i);
}
