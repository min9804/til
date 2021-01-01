int strlen(char *str)
{
	int len;

	len = 0;
	while(*str)
	{
		str++;
		len++;
	}

	return (len);
}

int strcpy(char *dest, char *src)
{
	while(*src)
	{
		*dest = *src;	
		src++;
		dest++;
	}
	*dest = '\0';

	return 1;
}

int stradd(char *dest, char *src)
{
	while(*dest)
	{
		dest++;
	}
	while(*src)
	{
		*dest = *src;
		dest++;
		src++;
	}
	*dest = '\0';

	return 1;
}

int compare(char *str1, char *str2)
{
	while (*str1)
	{
		if (*str1 != *str2)
			return (0);

		str1++;
		str2++;
	}
	
	if (*str2 == '\0')
		return (1);
}
