#include <stdlib.h>
#include <stdio.h>

int	ft_strlen(char *str)
{
	int i;
	
	i = 0;
	while (str[i])
		++i;
	return (i);
}

char *ft_itoa(int n)
{
	char	*ret;
	int	len;
	int	tmp;

	len = 0;
	tmp = n;
	while (tmp)
	{
		tmp /= 10;
		++len;
	}
	ret = (char *)malloc(len + 1);
	ret[len] = 0;
	--len;
	while (len >= 0)
	{
		ret[len] = n % 10 + '0';
		n /= 10;
		--len;
	}
	return (ret);
}

int	mom_calc(int du)
{
	if (du >= 2592000)
		du = du / 2592000;
	else if (du >= 86400)
		du = du / 86400;
	else if (du >= 3600)
		du = du / 3600;
	else if (du >= 60)
		du = du / 60;
	return (du);
}

char	*ft_strjoin(char *s1, char *s2)
{
	char	*ret;
	int	i;
	int	j;

	ret = (char *)malloc(ft_strlen(s1) + ft_strlen(s2) + 1);
	i = 0;
	j = 0;
	while (s1[i])
	{
		ret[i] = s1[i];
		++i;
	}
	while (s2[j])
	{
		ret[i] = s2[j];
		++j;
		++i;
	}
	ret[i] = 0;
	return (ret);
}

char	*moment(unsigned int duration)
{
	char	*num;
	char	*str;
	char	*ret;
	unsigned int nb;
	
	nb = mom_calc(duration);
	if (nb == 1)
	{
		if (duration >= 2592000)
			str = " month ago.";
		else if (duration >= 86400)
			str = " day ago.";
		else if (duration >= 3600)
			str = " hour ago.";
		else if (duration >= 60)
			str = " minute ago.";
		else
			str = " second ago.";
	}
	else
	{
		if (duration >= 2592000)
			str = " monthis ago.";
		else if (duration >= 86400)
			str = " days ago.";
		else if (duration >= 3600)
			str = " hours ago.";
		else if (duration >= 60)
			str = " minutes ago.";
		else
			str = " seconds ago.";
	}
	if (nb)
		num = ft_itoa(nb);
	else
		num = "0";
	ret = ft_strjoin(num, str);
	return (ret);
}

int	main()
{
	printf("%s\n", moment(120));
	return (0);
}
