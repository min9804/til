char *ft_strncat(char *dest, char *src, unsigned int nb)
{
	char *ptr;
	unsigned int i;

	i =0;
	ptr = dest;	
	while (*ptr)
		ptr++;
	while (*src && i < nb)
	{
		*ptr = *src;
		ptr++;
		src++;
		i++;
	}

	*ptr = '\0';

	return (dest);
}
